@class FinderNewUserPrepareResponse, MMUIViewController;

@interface WCFinderHistorySettingsHelper : NSObject

@property (retain, nonatomic) FinderNewUserPrepareResponse *userPrepare;
@property (weak, nonatomic) MMUIViewController *hostVC;

- (id)initWithUserPrepare:(id)a0 hostVC:(id)a1;
- (id)makeHistorySwitch;
- (void)onClickSwitchFeedHistory:(id)a0;
- (void)updateLocalHistoryFlag:(BOOL)a0;
- (id)makeCleanHistorySwitch;
- (void)onCleanHistory;
- (void).cxx_destruct;

@end
