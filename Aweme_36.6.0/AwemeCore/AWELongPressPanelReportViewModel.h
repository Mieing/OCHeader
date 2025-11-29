@interface AWELongPressPanelReportViewModel : AWELongPressPanelBaseViewModel

+ (BOOL)shouldShowReportWithAwemeModel:(id)a0 referString:(id)a1;
+ (id)longPressPanelViewModel;
+ (BOOL)shouldShowReportEntranceForPanelForModel:(id)a0;
+ (id)scenesWithReportEntranceToShow;

- (void)configVM;
- (id)panelBizVMIdentifier;
- (id)generateReportLogExtraDict;
- (BOOL)needShow;

@end
