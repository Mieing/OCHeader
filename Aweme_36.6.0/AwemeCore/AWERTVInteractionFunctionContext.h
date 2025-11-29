@protocol AWELiveAcqCastVideoViewModelProtocol;

@interface AWERTVInteractionFunctionContext : NSObject

@property (readonly, nonatomic) long long defaultSelectTab;
@property (readonly, nonatomic) id<AWELiveAcqCastVideoViewModelProtocol> viewModel;

- (void)updateViewModel:(id)a0;
- (id)initWithDefaultSelectTab:(long long)a0;
- (void).cxx_destruct;

@end
