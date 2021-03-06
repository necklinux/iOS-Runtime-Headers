/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STBarView : UIView {
    STUsageReportGraphDataPoint * _dataPoint;
    NSArray * _sectionHeightConstraints;
    NSArray * _sectionViews;
    bool  _selected;
}

@property (nonatomic, retain) STUsageReportGraphDataPoint *dataPoint;
@property (nonatomic, copy) NSArray *sectionHeightConstraints;
@property (nonatomic, copy) NSArray *sectionViews;
@property (nonatomic) bool selected;

- (void).cxx_destruct;
- (id)dataPoint;
- (id)initWithDataPoint:(id)arg1;
- (id)sectionHeightConstraints;
- (id)sectionViews;
- (bool)selected;
- (void)setDataPoint:(id)arg1;
- (void)setSectionHeightConstraints:(id)arg1;
- (void)setSectionViews:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setUpSectionHeightConstraints;
- (void)setUpSections;

@end
