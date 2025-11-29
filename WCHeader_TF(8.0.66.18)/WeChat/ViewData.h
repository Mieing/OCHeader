@class OptionSwitchViewData, ConfrimProtocalViewData, ListViewData, ImageViewData, SingleLineTextViewData, TableCellViewData, NewCardItemViewData, HorizontalGroupViewData, PriceAndFavorViewData, ButtonViewData, ButtonWithConfirmProtocalViewData, GroupViewData, MultiLineTextViewData, ViewStyle, SwitchViewData, ActionSheetViewData, OrderDetailViewData, ItemListViewData, CardRecordViewData, RightTextViewData, ItemSectionViewData, BannerViewData, TextViewData, CouponItemViewData, RoundTextViewData;

@interface ViewData : WXPBGeneratedMessage

@property (nonatomic) int type;
@property (retain, nonatomic) TextViewData *text;
@property (retain, nonatomic) RightTextViewData *rightText;
@property (retain, nonatomic) SwitchViewData *switchButton;
@property (retain, nonatomic) SingleLineTextViewData *singleLineText;
@property (retain, nonatomic) MultiLineTextViewData *multiLineText;
@property (retain, nonatomic) NewCardItemViewData *newCardRecord;
@property (retain, nonatomic) CardRecordViewData *cardRecord;
@property (retain, nonatomic) CouponItemViewData *couponItem;
@property (retain, nonatomic) BannerViewData *banner;
@property (retain, nonatomic) ButtonViewData *button;
@property (retain, nonatomic) ImageViewData *image;
@property (retain, nonatomic) ListViewData *list;
@property (retain, nonatomic) GroupViewData *group;
@property (retain, nonatomic) PriceAndFavorViewData *priceAndFavor;
@property (retain, nonatomic) OrderDetailViewData *orderDetail;
@property (retain, nonatomic) ItemListViewData *itemList;
@property (retain, nonatomic) ItemSectionViewData *itemSection;
@property (retain, nonatomic) TableCellViewData *tableCell;
@property (retain, nonatomic) ConfrimProtocalViewData *confirmProtocal;
@property (retain, nonatomic) ButtonWithConfirmProtocalViewData *btnWithProtocal;
@property (retain, nonatomic) ActionSheetViewData *actionSheet;
@property (retain, nonatomic) ViewStyle *style;
@property (retain, nonatomic) RoundTextViewData *roundText;
@property (retain, nonatomic) HorizontalGroupViewData *horizontalGroup;
@property (retain, nonatomic) OptionSwitchViewData *optionSwitch;

+ (void)initialize;

@end
