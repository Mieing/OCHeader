@class UIColor, UIImageView, UILabel, IESECTabKitNavItemModel;
@protocol IESECTabKitNavItemViewDelegate;

@interface IESECTabKitNavItemView : UIView {
    IESECTabKitNavItemModel *_itemModel;
}

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (weak, nonatomic) id<IESECTabKitNavItemViewDelegate> delegate;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) unsigned long long fontSize;
@property (nonatomic) unsigned long long fontWeight;
@property (retain, nonatomic) UIColor *textColor;

- (void)configWithItemModel:(id)a0;
- (void)navItemDidSelect;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
