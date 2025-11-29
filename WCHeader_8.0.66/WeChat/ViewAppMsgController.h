@class NSString, MMUIViewController, MMUIWindow, CMessageWrap, UIImageView;
@protocol ViewAppMsgControllerDelegate;

@interface ViewAppMsgController : NSObject <AppDetailDelegate, WCNetworkMediaPlayerDelegate> {
    MMUIViewController *m_fromVC;
    id<ViewAppMsgControllerDelegate> m_delegate;
    MMUIWindow *m_fullScreenWindow;
    CMessageWrap *m_curWrapMsg;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } m_originFrame;
    UIImageView *m_thumbImageVew;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)JumpToViewStreamVideo:(id)a0;
- (void)PreviewAppMsg:(id)a0 Pop:(BOOL)a1;
- (void)viewAppMsg:(id)a0;
- (void)viewAppMsg:(id)a0 msg:(id)a1 originFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 delegate:(id)a3;
- (void)viewAppMsg:(id)a0 msg:(id)a1 originFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 thumbImageView:(id)a3 delegate:(id)a4;
- (void)OnAppDataPreview:(id)a0 MsgWrap:(id)a1;
- (BOOL)stopAtLastVideoFrameWhenPlayEnd;
- (void)onClosePlayer;
- (void)jumpToDetail:(id)a0;
- (void)onClosePlayerForViewDetail:(id)a0;
- (void)onClickFavVideoMenu;
- (void)onShareVideoToFriend:(id)a0;
- (void)onShareVideoToTimeline:(BOOL)a0;
- (void).cxx_destruct;

@end
