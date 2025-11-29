@class NSString;

@interface ACCLoadingViewTracker : NSObject <AWEUILoadingViewDelegate, AWEUITextLoadingViewDelegate, AWEUIProgressLoadingViewDelegate, DUXLoadingToastDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedTracker;

- (void)DUXLoadingToastDidClosed:(id)a0;
- (void)DUXLoadingToastDidStartAnimating:(id)a0;
- (void)DUXLoadingToastDidStopAnimating:(id)a0;
- (void)DUXToastDidShow:(id)a0;
- (void)DUXToastWillHidden:(id)a0;
- (void)DUXToastWillRemoved:(id)a0;
- (void)progressLoadingViewDidStartAnimating:(id)a0;
- (void)progressLoadingViewDidStopAnimating:(id)a0;
- (void)progressLoadingViewDidClickCancel:(id)a0;
- (void)progressLoadingViewWillHide:(id)a0;
- (void)progressLoadingViewWillRemoved:(id)a0;
- (void)loadingViewDidStartAnimating:(id)a0;
- (void)loadingViewDidStopAnimating:(id)a0;
- (void)loadingViewWillHidden:(id)a0;
- (void)loadingViewWillRemoved:(id)a0;
- (void)textLoadingViewDidStartAnimating:(id)a0;
- (void)textLoadingViewDidStopAnimating:(id)a0;
- (void)textLoadingViewWillHidden:(id)a0;
- (void)textLoadingViewWillRemoved:(id)a0;
- (void)_trackLoadingViewIfNeeded:(id)a0;
- (void)trackLoadingwithScene:(long long)a0 title:(id)a1 msg:(id)a2 action:(unsigned long long)a3 duration:(double)a4 extra:(id)a5;
- (void)trackTextLoadingViewIfNeeded:(id)a0 action:(unsigned long long)a1;
- (void)_trackProgressLoadingViewIfNeeded:(id)a0 action:(unsigned long long)a1;
- (void)_trackDUXLoadingViewIfNeeded:(id)a0 action:(unsigned long long)a1;
- (void)observeLoadingView:(id)a0 withScene:(long long)a1;
- (void)observeTextLoadingView:(id)a0 withScene:(long long)a1;
- (void)observeProgressView:(id)a0 withScene:(long long)a1;
- (void)observeDUXLoadingView:(id)a0 withScene:(long long)a1;

@end
