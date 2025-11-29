@class NSString, AWEDoubleColumnSearchMerchandiseModel, UILabel, AWEOriginalAdModel;

@interface AWESearchAdBannerCell : UICollectionViewCell <AWESearchCachalotCardViewProtocol, AWESearchMerchandiseDoubleColumnCell>

@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseModel *searchMerchandiseModel;
@property (retain, nonatomic) UILabel *adTagLabel;
@property (retain, nonatomic) AWEOriginalAdModel *adModel;
@property (nonatomic) BOOL isFromECommerce;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForModel:(id)a0 containerWidth:(double)a1;
+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;
+ (id)identifier;

- (void)configWithModel:(id)a0;
- (void)trackAdOtherShow;
- (void)recordDidEndDisplaying;
- (void)containerViewSingleTapGR:(id)a0;
- (void)trackWithLabel:(id)a0;
- (void)openPageWithAdTask;
- (id)ironManURLWithAdModel:(id)a0;
- (id)ironManScene;
- (id)commonParamsForTrack;
- (void)p_configAdTagLabel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)componentView;
- (void)setupSubviews;
- (void)updateWithViewModel:(id)a0;

@end
