@protocol BDEnvGeckoHeaderViewDelegate;

@interface BDEnvPlatformGeckoHeaderView : UIView

@property (nonatomic) BOOL isExpand;
@property (weak, nonatomic) id<BDEnvGeckoHeaderViewDelegate> delegate;

- (void).cxx_destruct;
- (id)init;
- (void)buttonTapped:(id)a0;

@end
