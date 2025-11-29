@class UIImageView, UIStackView, UIView;

@interface IESECGoodsFeedResourceCardStoreView : UIView {
    BOOL _hasBrandIcon;
}

@property (retain, nonatomic) UIImageView *storeAvatar;
@property (retain, nonatomic) UIView *entranceButton;
@property (retain, nonatomic) UIStackView *titleStack;
@property (retain, nonatomic) UIStackView *recommendStack;
@property (nonatomic) double cardWidth;

- (void)addSubviews;
- (void)setupUIWithModel:(id)a0;
- (id)trimStoreTitle:(id)a0 font:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
