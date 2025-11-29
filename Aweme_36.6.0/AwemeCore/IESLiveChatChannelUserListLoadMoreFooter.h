@class UIView;
@protocol IESLiveRefreshView;

@interface IESLiveChatChannelUserListLoadMoreFooter : MJRefreshBackStateFooter

@property (retain, nonatomic) UIView<IESLiveRefreshView> *loadingView;

- (void).cxx_destruct;
- (void)prepare;
- (void)setState:(long long)a0;

@end
