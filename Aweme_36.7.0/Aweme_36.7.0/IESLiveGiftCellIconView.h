@class UIImageView, HTSLiveGiftItem, IESLiveRoomGiftItemCellContext;

@interface IESLiveGiftCellIconView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) HTSLiveGiftItem *giftItem;
@property (retain, nonatomic) IESLiveRoomGiftItemCellContext *context;

- (void)updateGiftItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(id)a1;
- (void)setupUI;

@end
