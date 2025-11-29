@class NSString, TTTAttributedLabel, AWEButton, UIView;

@interface AWEProfileTipView : UIView <TTTAttributedLabelDelegate, UIGestureRecognizerDelegate, AWEProfileTipViewProtocol>

@property (copy, nonatomic) NSString *tipText;
@property (copy, nonatomic) NSString *linkText;
@property (copy, nonatomic) NSString *tipKey;
@property (copy, nonatomic) NSString *linkKey;
@property (retain, nonatomic) TTTAttributedLabel *tipLabel;
@property (retain, nonatomic) AWEButton *closeButton;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *contentViewBackground;
@property (retain, nonatomic) UIView *contentViewBackgroundMaskView;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *douGuideTipText;
@property (copy, nonatomic) id /* block */ closeTappedBlock;
@property (copy, nonatomic) id /* block */ clickLinkBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)attributedLabel:(id)a0 didSelectLinkWithURL:(id)a1;
- (void)setupGesture;
- (void)updateContentAlpha:(double)a0;
- (void)closeClicked:(id)a0;
- (id)initWithTipKey:(id)a0 linkKey:(id)a1;
- (id)initWithTipText:(id)a0 linkText:(id)a1;
- (void)updateTipLabelFont:(id)a0;
- (id)initWithProfileTipViewType:(long long)a0 linkText:(id)a1 tipText:(id)a2;
- (id)tipText:(long long)a0;
- (void)setupTipLabel;
- (void)p_tapTipLabel:(id)a0;
- (void)updateTipText:(id)a0;
- (void)updateMaskBackgroundColor:(id)a0;
- (id)initWithProfileTipViewType:(long long)a0 linkText:(id)a1;
- (void)updateWithProfileTipViewType:(long long)a0;
- (double)contentHeight;
- (void)dismiss;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)updateContentBackgroundColor:(id)a0;
- (id)linkColor;
- (void)setupUI;

@end
