@class NSString, UIImageView, UIView;

@interface AWEIMEmoticonReplyPanelCollectionViewCell : UICollectionViewCell <AFDHoverable>

@property (readonly, nonatomic) long long afdHoverStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIView *highlightMaskView;
@property (copy, nonatomic) id /* block */ didSelectBlock;
@property (copy, nonatomic) id /* block */ shouldSelectBlock;
@property (copy, nonatomic) id /* block */ beginHoverBlock;
@property (copy, nonatomic) id /* block */ cancelHoverBlock;
@property (copy, nonatomic) id /* block */ endHoverBlock;

+ (id)identifier;

- (void)createComponents;
- (void)hoverBegan:(id)a0;
- (void)hoverEnded:(id)a0;
- (void)hoverCancelled:(id)a0;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutComponents;

@end
