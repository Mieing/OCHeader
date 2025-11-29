@class AWEIMPageSLOReportConfig;

@interface AWEIMHunterClientPageShowStagePlugin : HunterBasePlugin

@property (retain, nonatomic) AWEIMPageSLOReportConfig *reportConfig;

- (BOOL)shouldActive;
- (void)onHunterBindStart:(id)a0;
- (void)onHunterLoadSuccess:(id)a0;
- (void)onHunterContainerVCViewDidDisAppear:(id)a0;
- (void).cxx_destruct;

@end
