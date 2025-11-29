@class IESLiveUserCardStore;

@interface IESLiveMyLiveFixedOperationButton : UIView

@property (retain, nonatomic) IESLiveUserCardStore *store;
@property (nonatomic) long long type;

- (void)setupMyRightsBtn;
- (void)setupOpenLiveBtn;
- (void)myRightsTapped:(id)a0;
- (void)openLiveTapped:(id)a0;
- (id)initWithType:(long long)a0 store:(id)a1;
- (void).cxx_destruct;
- (void)setup;

@end
