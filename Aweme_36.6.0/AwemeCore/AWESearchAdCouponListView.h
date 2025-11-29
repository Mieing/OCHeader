@class UILabel, AWETagLabelModel, AWESearchMerchandiseAdLabelStruct;

@interface AWESearchAdCouponListView : AWESearchCouponListView

@property (retain, nonatomic) UILabel *adTagLabel;
@property (retain, nonatomic) AWETagLabelModel *adTagLabelModel;
@property (retain, nonatomic) AWESearchMerchandiseAdLabelStruct *adLabelModel;
@property (nonatomic) double adTagLabelFontSize;

- (double)adtagBorderWidthWithModel:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
