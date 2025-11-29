@class UILabel, IESECFoldableTextView;
@protocol IESECCommentDetailTextViewDelegate;

@interface IESECCommentDetailTextView : UIView

@property (retain, nonatomic) IESECFoldableTextView *foldableTextView;
@property (retain, nonatomic) UILabel *skuLabel;
@property (retain, nonatomic) UILabel *authorLabel;
@property (nonatomic) unsigned long long enterFrom;
@property (readonly, nonatomic) BOOL folded;
@property (weak, nonatomic) id<IESECCommentDetailTextViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 enterFrom:(unsigned long long)a1;
- (void)foldingButtonStateChanged:(id)a0;
- (void)setupSubview;
- (void)updateViewWithModel:(id)a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (BOOL)isFolded;

@end
