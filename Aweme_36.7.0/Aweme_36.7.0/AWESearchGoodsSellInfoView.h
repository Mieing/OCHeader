@class NSMutableArray, AWESearchMerchandiseProductDoubleInfos;

@interface AWESearchGoodsSellInfoView : UIView

@property (retain, nonatomic) NSMutableArray *infoViewArray;
@property (retain, nonatomic) NSMutableArray *separatorViewArray;
@property (retain, nonatomic) AWESearchMerchandiseProductDoubleInfos *doubleInfos;

+ (double)heightWithDoubleInfos:(id)a0;

- (void)createSellLabelsWithCommonInfo:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateUI;

@end
