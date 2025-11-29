@class LinkWeAppJumpWrap, MMLoadingIndicatorView, UIImageView, NSString, RichTextView;

@interface ChatBotVOIPBoardViewWeAppProcessTitleView : UIView <WAAppTaskMgrExt, ILinkEventExt>

@property (retain, nonatomic) LinkWeAppJumpWrap *waitingLaunchWeAppWrap;
@property (retain, nonatomic) UIImageView *completeImg;
@property (retain, nonatomic) RichTextView *richTextView;
@property (retain, nonatomic) MMLoadingIndicatorView *indicatorView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAppTaskDidFinishLaunchWithAppId:(id)a0;
- (void)dealloc;
- (void)setWaitingLaunchWeAppWrap:(id)a0;
- (id)waitingLaunchWeAppWrap;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 text:(id)a1;
- (void)layoutViewsWithText:(id)a0;
- (void)complete;
- (void)onWeAppLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
