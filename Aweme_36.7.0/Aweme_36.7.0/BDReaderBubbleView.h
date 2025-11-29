@class BDReaderBubbleViewConfig, UIImageView, UIView, UIScrollView, UILabel;
@protocol BDReaderBubbleViewDelegate;

@interface BDReaderBubbleView : UIControl

@property (retain, nonatomic) BDReaderBubbleViewConfig *config;
@property (retain, nonatomic) UIImageView *triangleView;
@property (retain, nonatomic) UIView *containerBgView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (weak, nonatomic) id<BDReaderBubbleViewDelegate> delegate;

+ (id)bubbleWithContent:(id)a0 config:(id)a1;

- (void)dismiss;
- (void).cxx_destruct;
- (void)setContent:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)showInView:(id)a0;
- (void)tapped:(id)a0;

@end
