@class UIImageView, AWETeenUmbrellaPopoverSheetItem, UILabel;

@interface AWETeenUmbrellaPopoverSheetItemView : UIView

@property (retain, nonatomic) AWETeenUmbrellaPopoverSheetItem *item;
@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UIImageView *arrowImage;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;

- (void)p_setupGesture;
- (void)p_setupViews;
- (void)p_itemClick;
- (id)initWithSheetItem:(id)a0;
- (void).cxx_destruct;

@end
