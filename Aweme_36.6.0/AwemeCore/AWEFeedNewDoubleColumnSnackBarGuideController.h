@interface AWEFeedNewDoubleColumnSnackBarGuideController : AWEDCFeedBaseController

- (void)enterContainerWithModel:(id)a0;
- (void)containerCollectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)bubbleConfig;
- (id)guideBubbleID;
- (void)recordPreviewModeEnterC2;
- (BOOL)shouldShowDirectToC2SnackBarWithFrequencyControl;
- (BOOL)shouldShowDirectToC2SnackBarWithUserCondition;
- (void)showDirectToC2SnackBar;
- (BOOL)showSnackBar;
- (BOOL)showSnackbarConditionTypeWithEnterC2;
- (BOOL)showSnackbarConditionTypeWithClickCell;
- (BOOL)showSnackbarConditionTypeWithEnterOrClick;
- (long long)snackBarShownDays;
- (void)showBubbleGuide;
- (id)guideBubbleText;

@end
