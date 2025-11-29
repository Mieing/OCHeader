@class TTTAttributedLabel, NSString, NSDictionary, UIVisualEffectView, AWEIMStrongNoticeMessage, UIView, UIButton;

@interface AWEIMStrongNoticeView : UIView <TTTAttributedLabelDelegate>

@property (retain, nonatomic) AWEIMStrongNoticeMessage *message;
@property (copy, nonatomic) NSDictionary *commonTrackDict;
@property (retain, nonatomic) UIView *line;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) TTTAttributedLabel *tipsLabel;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeWithMessage:(id)a0 maxWidth:(double)a1;
+ (struct CGSize { double x0; double x1; })sizeWithMessage:(id)a0;

- (void)attributedLabel:(id)a0 didSelectLinkWithURL:(id)a1;
- (void)refreshBackgroundColorWhileHasBackground:(BOOL)a0;
- (void)configWithMessage:(id)a0;
- (void)didClickCloseBtn:(id)a0;
- (void)dismissStrongNoticeView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
