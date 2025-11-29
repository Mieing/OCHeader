@class UIScrollView, NSString, IESServiceProvider, UIView, UILabel, UIViewController;
@protocol AWEDetailViewModelProtocol, AWEDetailInfiniteScrollingHostViewController;

@interface AWEDetailInfiniteScrollingHandler : NSObject <AWEDetailBusinessHandlerProtocol>

@property (weak, nonatomic) UIViewController<AWEDetailInfiniteScrollingHostViewController> *host;
@property (weak, nonatomic) id<AWEDetailViewModelProtocol> stateContext;
@property (weak, nonatomic) IESServiceProvider *provider;
@property (weak, nonatomic) UIView *lastLoadingContainerView;
@property (weak, nonatomic) UILabel *hostNoMoreTipLabel;
@property (weak, nonatomic) UIScrollView *hostScrollingView;
@property (nonatomic) BOOL shouldSkipFetchWhenDataNotUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hostViewDidLoad;
- (id)initWithHost:(id)a0 serviceProvider:(id)a1;
- (void)p_handleAwemeListFetchStateChange;
- (void)p_handleAwemeListUpdated;
- (void)p_handleDetailInfoFetchStateChange;
- (void)p_showLoadingView;
- (void)p_showNoMoreTipLabel;
- (BOOL)p_needShowEmptyAwemeListTip;
- (void)p_updateEmptyAwemeListTip;
- (BOOL)p_needShowEmptyAwemeListHintView;
- (void).cxx_destruct;

@end
