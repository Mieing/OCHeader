@class UIButton, NSString, NSMutableArray, MMTipsViewController;

@interface KindaAlertDialog : NSObject <MMTipsViewControllerDelegate, WCPayWebImageViewDelegate, MMKAlertDialog> {
    UIButton *_leftBtn;
    UIButton *_rightBtn;
}

@property (retain, nonatomic) NSMutableArray *m_buttonEventArray;
@property (retain, nonatomic) NSMutableArray *m_buttonEvents;
@property (nonatomic) long long contentTextAlign;
@property (retain, nonatomic) MMTipsViewController *m_tipsVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)showTipsImpl:(id)a0 content:(id)a1 button:(id)a2 event:(id)a3;
- (void)showTipsImpl:(id)a0 content:(id)a1 leftbutton:(id)a2 rightbutton:(id)a3 leftEvent:(id)a4 rightEvent:(id)a5;
- (void)showTipsImpl:(id)a0 content:(id)a1 leftbutton:(id)a2 middlebutton:(id)a3 rightbutton:(id)a4 leftEvent:(id)a5 middleEvent:(id)a6 rightEvent:(id)a7;
- (void)showTipsImpl:(id)a0 image:(id)a1 content:(id)a2 button:(id)a3 event:(id)a4;
- (void)showTipsImpl:(id)a0 kImage:(id)a1 content:(id)a2 button:(id)a3 event:(id)a4;
- (void)showTipsImpl:(id)a0 image:(id)a1 content:(id)a2 leftbutton:(id)a3 rightbutton:(id)a4 leftEvent:(id)a5 rightEvent:(id)a6;
- (void)showTipsImpl:(id)a0 kImage:(id)a1 content:(id)a2 leftbutton:(id)a3 rightbutton:(id)a4 leftEvent:(id)a5 rightEvent:(id)a6;
- (void)showImpl:(id)a0 content:(id)a1 button:(id)a2 event:(id)a3;
- (void)showImpl:(id)a0 content:(id)a1 leftbutton:(id)a2 rightbutton:(id)a3 leftEvent:(id)a4 rightEvent:(id)a5;
- (void)showImpl:(id)a0 content:(id)a1 leftbutton:(id)a2 middlebutton:(id)a3 rightbutton:(id)a4 leftEvent:(id)a5 middleEvent:(id)a6 rightEvent:(id)a7;
- (void)showTouchIdAuthViewImpl:(id)a0 successEvent:(id)a1 failEvent:(id)a2 cancelEvent:(id)a3 forgetPwdEvent:(id)a4;
- (void)showInputAlertImpl:(id)a0 content:(id)a1 tips:(id)a2 maxLength:(int)a3 ok:(id)a4 cancel:(id)a5;
- (void)showImpl:(id)a0 contentView:(id)a1 leftbutton:(id)a2 rightbutton:(id)a3 leftEvent:(id)a4 rightEvent:(id)a5;
- (void)setContentAlign:(long long)a0;
- (void)dismiss;
- (BOOL)isShowing;
- (void)insideShowTipsImpl:(id)a0 content:(id)a1 buttonWordings:(id)a2 buttonEvents:(id)a3;
- (void)insideShowTipsImpl:(id)a0 image:(id)a1 content:(id)a2 buttonWordings:(id)a3 buttonEvents:(id)a4;
- (void)insideShowImpl:(id)a0 content:(id)a1 buttonWordings:(id)a2 buttonEvents:(id)a3;
- (void)onClickTipsBtn:(id)a0 Index:(long long)a1;
- (void)onLoadWCPayWebImageOK:(id)a0;
- (void).cxx_destruct;

@end
