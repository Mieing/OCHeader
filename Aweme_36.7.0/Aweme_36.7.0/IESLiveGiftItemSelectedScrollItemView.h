@class IESLiveAnimatedImageView, UILabel, IESLiveRoomGiftItemCellContext;

@interface IESLiveGiftItemSelectedScrollItemView : UIView

@property (retain, nonatomic) IESLiveAnimatedImageView *imageView;
@property (retain, nonatomic) IESLiveAnimatedImageView *editionAnimateImageView;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) IESLiveRoomGiftItemCellContext *context;
@property (nonatomic) long long currentIndex;

- (void)showEditionAnimateImageView:(BOOL)a0;
- (void)updateItemDataModel:(id)a0;
- (void)updateItemEditionAnimateImage:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(id)a1;
- (void)setupUI;

@end
