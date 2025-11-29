@class NSArray, NSString, MsgImgFullScreenWindow, ViewAppMsgController;
@protocol IntelligentMsgImgFullScreenMsgImgClickLogicDelegate;

@interface IntelligentMsgImgFullScreenMsgImgClickLogic : NSObject <ViewAppMsgControllerDelegate, MsgImgFullScreenViewControllerDelegate, MsgImgWeakBrowseViewControllerDelegate, MsgImgFullScreenWindowDelegate> {
    ViewAppMsgController *m_viewAppMsgController;
    MsgImgFullScreenWindow *m_imgFullScreenWnd;
}

@property (retain, nonatomic) NSArray *m_arrResultMessagr;
@property (weak, nonatomic) id<IntelligentMsgImgFullScreenMsgImgClickLogicDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)PreviewImage:(id)a0 MsgSquareThumb:(id)a1;
- (void)previewImage:(id)a0 originFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)messageWrapMatchImage:(id)a0;
- (void)jumpToDetail:(id)a0;
- (void)onJumpToViewDetail:(id)a0;
- (void)onPlayAttachVideo:(id)a0 vc:(id)a1;
- (void)onSightViewDetail:(id)a0 vc:(id)a1;
- (void)onImgMsgLocate:(id)a0 vc:(id)a1;
- (void)onMsgImgWindowWillHideToMsg:(id)a0 extraInfo:(id)a1;
- (void)onMsgImgPreviewDataRequired:(id)a0;
- (void)onShowImgMsgLocate:(id)a0 imageScrollView:(id)a1 vc:(id)a2;
- (BOOL)onCurrentPageMsgImgDataMatch:(id)a0;
- (BOOL)shouldNeedShowImgFastBrowseBtn:(id)a0;
- (id)getViewController;
- (void)onImgMsgLocate:(id)a0;
- (void).cxx_destruct;

@end
