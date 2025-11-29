@class WCMomentsErrTipsViewModel, NSString, UIImageView, RichTextView, UIButton;
@protocol WCCommentErrTipsViewDelegate;

@interface WCCommentErrTipsView : UIView <ILinkEventExt>

@property (retain, nonatomic) RichTextView *tipsTextView;
@property (retain, nonatomic) UIButton *customButton;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (readonly, nonatomic) WCMomentsErrTipsViewModel *viewModel;
@property (weak, nonatomic) id<WCCommentErrTipsViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightWithViewModel:(id)a0 width:(double)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;
- (void)initView;
- (void)layoutSubviews;
- (void)updateErrImageView;
- (void)updateWithDataItem:(id)a0;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onCustomButtonClick;
- (void).cxx_destruct;

@end
