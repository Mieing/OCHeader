@class AFDProfileAvatarFunctionModel, UIView, AFDProfileAvatarActionView;

@interface AFDProfileAvatarFunctionCell : UICollectionViewCell

@property (retain, nonatomic) AFDProfileAvatarFunctionModel *model;
@property (retain, nonatomic) AFDProfileAvatarActionView *actionView;
@property (retain, nonatomic) UIView *separatorLineView;

+ (id)reuseIdentifier;

- (void)configWithModel:(id)a0;
- (void)updateFormatDesc:(id)a0;
- (void)updateWithState:(BOOL)a0 animated:(BOOL)a1;
- (void)p_setupUI;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;

@end
