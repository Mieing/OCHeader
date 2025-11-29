@class UIFont, NSString, NSDictionary, AWEDoubleColumnSearchMerchandiseModel, UIColor, UIResponder;

@interface AWEEcomSearchShopWindowCellModel : NSObject

@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseModel *model;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *trackId;
@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *jumpText;
@property (copy, nonatomic) NSString *jumpSchema;
@property (copy, nonatomic) NSString *diamondUrl;
@property (nonatomic) double diamondWidth;
@property (nonatomic) double diamondHeight;
@property (copy, nonatomic) NSString *flagShipLeftImageUrl;
@property (nonatomic) double flagShipLeftWidth;
@property (nonatomic) double flagShipLeftHeight;
@property (copy, nonatomic) NSString *flagShipRightImageUrl;
@property (nonatomic) double flagShipRightWidth;
@property (nonatomic) double flagShipRightHeight;
@property (copy, nonatomic) NSString *shopScore;
@property (nonatomic) BOOL isNoScore;
@property (nonatomic) double padding;
@property (retain, nonatomic) UIFont *flagShipScoreFont;
@property (retain, nonatomic) UIColor *flagShipScoreColor;
@property (retain, nonatomic) UIColor *borderColor;
@property (retain, nonatomic) UIColor *bgColor;
@property (retain, nonatomic) UIColor *wordColor;
@property (copy, nonatomic) NSString *windowScore;
@property (copy, nonatomic) NSString *windowLevel;
@property (copy, nonatomic) NSString *windowText;
@property (weak, nonatomic) UIResponder *btmResponder;

- (void)cellWillDisplay;
- (void)trackCardShow;
- (void)setExtraTrackParams:(id)a0;
- (void)trackCardClick;
- (void)parseModel;
- (id)levelWord:(long long)a0;
- (id)levelBgColor:(long long)a0;
- (id)levelBorderColor:(long long)a0;
- (id)levelWordColor:(long long)a0;
- (id)storeTrackParams;
- (id)searchTrackParams;
- (void)didSelectCell;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (id)storeType;

@end
