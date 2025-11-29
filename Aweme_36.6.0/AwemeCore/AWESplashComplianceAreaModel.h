@class NSString, NSDictionary, AWESplashRoundAreaModel, AWESplashLongPressModel;

@interface AWESplashComplianceAreaModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long style;
@property (retain, nonatomic) AWESplashLongPressModel *longPressInfo;
@property (retain, nonatomic) AWESplashRoundAreaModel *roundAreaInfo;
@property (retain, nonatomic) NSDictionary *twistImageInfo;
@property (retain, nonatomic) NSDictionary *goodsCardInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)longClickInfoJSONTransformer;
+ (id)roundAreaInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
