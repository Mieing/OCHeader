@class NSString;

@interface AWEIMHunterClientAchievePageShowStagePlugin : HunterBasePlugin

@property (copy, nonatomic) NSString *cid;

- (BOOL)shouldActive;
- (void)onHunterBindStart:(id)a0;
- (void)onHunterLoadSuccess:(id)a0;
- (void)onHunterContainerVCViewDidDisAppear:(id)a0;
- (void).cxx_destruct;

@end
