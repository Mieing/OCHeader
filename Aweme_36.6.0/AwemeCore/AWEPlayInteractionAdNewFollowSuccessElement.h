@class NSString, AWEAntiAddictedNoticeBarView;

@interface AWEPlayInteractionAdNewFollowSuccessElement : AWEPlayInteractionNewBottomElement <AWEUserMessage>

@property (retain, nonatomic) AWEAntiAddictedNoticeBarView *antiAddictedNoticeBarView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)initializeElement;
- (id)activateInfoWithData:(id)a0;
- (void)viewDidDisposed;
- (BOOL)shouldAppearWithData:(id)a0;
- (void)hideMutexTempElement:(id /* block */)a0;
- (void)noticeTapped;
- (void)showAntiAddictedNoticeBarView;
- (void)hideAntiAddictedNoticeBarView;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;
- (void)dealloc;

@end
