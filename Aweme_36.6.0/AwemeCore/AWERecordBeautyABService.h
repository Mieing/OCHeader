@class NSString;

@interface AWERecordBeautyABService : HTSService <AWERecordBeautyABService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showBeautyPanel;
- (BOOL)isEnableTrackerLogStatus;
- (id)abInfo;
- (BOOL)isEnableRecordBeautyAddStyleEffectSwitchStatus;
- (BOOL)isEnableLeaveRecordBeautyAddStyleEffectStatus;
- (BOOL)isEnableStyleItemGuideBubbleShowStatus;
- (id)styleItemGuideBubbleContent;
- (double)styleItemGuideBubbleAutoDismissTime;
- (double)styleItemGuideBubbleDelayInSecondTime;
- (BOOL)isEnableRefactoringRecorderBeautySwitchCloseAndOpenStatus;
- (BOOL)isEnableRecordUpdateBeautyAvailabilitiesSingleStatus;
- (BOOL)isEnableRecordUpdateBeautyAvailabilitiesAsyncStatus;
- (BOOL)isEnableRecordBeautyTrackerOffNodeStatus;

@end
