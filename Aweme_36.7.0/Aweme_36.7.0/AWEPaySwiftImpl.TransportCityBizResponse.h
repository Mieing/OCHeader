@class NSString, NSArray, _TtC15AWEPaySwiftImpl22BusinessNetworkGateway, _TtC15AWEPaySwiftImpl29TransportPromotionBannerModel, _TtC15AWEPaySwiftImpl18TransportCityModel;

@interface AWEPaySwiftImpl.TransportCityBizResponse : MTLModel <MTLJSONSerializing> {
    void /* function */ retCode;
    void /* function */ retMsg;
    void /* function */ cityList;
    void /* function */ hotCityList;
    void /* function */ currentCitySceneList;
    void /* function */ businessTitle;
}

@property (nonatomic, copy) NSString *retCode;
@property (nonatomic, copy) NSString *retMsg;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl22BusinessNetworkGateway *gateway;
@property (nonatomic, copy) NSArray *cityList;
@property (nonatomic, copy) NSArray *hotCityList;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl18TransportCityModel *locationCity;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl18TransportCityModel *currentCity;
@property (nonatomic, copy) NSArray *currentCitySceneList;
@property (nonatomic, copy) NSString *businessTitle;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl29TransportPromotionBannerModel *promotionBanner;

+ (id)cityListJSONTransformer;
+ (id)hotCityListJSONTransformer;
+ (id)currentCitySceneListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
