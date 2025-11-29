@class UIButton, UIImageView, UILabel, UIView, UITapGestureRecognizer;

@interface WCFinderProfileNormalTitleButtonHeader : UICollectionReusableView

@property (nonatomic) BOOL needReDisplayExtButton;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL selector;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIView *bottomLine;
@property (retain, nonatomic) UIButton *extButton;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } titleEdgeInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } lineEdgeInsets;
@property (nonatomic) BOOL showRightArrow;

+ (double)defaultDisplayHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)removeAllAction;
- (void)addClickTarget:(id)a0 selector:(SEL)a1;
- (void)_onClick;
- (void).cxx_destruct;

@end
