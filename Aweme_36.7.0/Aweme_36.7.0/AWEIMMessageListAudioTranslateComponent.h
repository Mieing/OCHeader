@class NSString;
@protocol AWEIMMessageListDataInterface;

@interface AWEIMMessageListAudioTranslateComponent : AWEIMComponentBase <AWEIMMessageListDataAction>

@property (weak, nonatomic) id<AWEIMMessageListDataInterface> dataService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (void)didReceiveNewMessage:(id)a0 reason:(long long)a1;
- (void)beforeAsync_didFetchMsgWithMessageGroupArray:(id)a0 hasMore:(BOOL)a1 direction:(unsigned long long)a2 shouldAutoLoadMore:(BOOL)a3 isFirstLoad:(BOOL)a4;
- (void)hostVC_viewWillDisappear;
- (void).cxx_destruct;
- (void)dealloc;

@end
