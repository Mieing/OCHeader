@class NSString, AWESearchCarInfoModel;

@interface AWESearchCarSeriesModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *uri;
@property (retain, nonatomic) AWESearchCarInfoModel *carInfoModel;
@property (retain, nonatomic) NSString *infoSource;
@property (readonly, copy, nonatomic) NSString *aladdinID;

+ (id)aladdinIDJSONTransformer;
+ (id)carInfoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
