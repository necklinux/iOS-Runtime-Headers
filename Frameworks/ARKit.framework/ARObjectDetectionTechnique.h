/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARObjectDetectionTechnique : ARTechnique {
    NSObject<OS_dispatch_semaphore> * _dataSemaphore;
    NSArray * _detectionObjects;
    bool  _finishedLoadingObjects;
    ARObjectDetectionResultData * _latestResultData;
    NSObject<OS_dispatch_queue> * _loadObjectsQueue;
    bool  _startedLoadingObjects;
    ARWorldTrackingTechnique * _worldTrackingTechnique;
}

@property (nonatomic, readonly) NSArray *detectionObjects;
@property bool finishedLoadingObjects;
@property bool startedLoadingObjects;
@property (retain) ARWorldTrackingTechnique *worldTrackingTechnique;

- (void).cxx_destruct;
- (void)_loadReferenceObjects;
- (void)_removeAnchorsForContext:(id)arg1;
- (void)_reportObjectDetection:(id)arg1 timestamp:(double)arg2;
- (void)_setupWorldTrackingTechniqueBinding:(id)arg1;
- (id)detectionObjects;
- (bool)finishedLoadingObjects;
- (id)initWithTrackingTechnique:(id)arg1 detectionObjects:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)prepare;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (void)setFinishedLoadingObjects:(bool)arg1;
- (void)setStartedLoadingObjects:(bool)arg1;
- (void)setWorldTrackingTechnique:(id)arg1;
- (void)siblingTechniquesDidChange:(id)arg1;
- (bool)startedLoadingObjects;
- (id)worldTrackingTechnique;

@end
