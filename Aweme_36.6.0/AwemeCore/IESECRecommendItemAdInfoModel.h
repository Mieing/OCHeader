@class NSString, NSDictionary, IESECRecommendItemRawAdDataModel;

@interface IESECRecommendItemAdInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long adId;
@property (nonatomic) BOOL showAdTag;
@property (copy, nonatomic) NSString *rawData;
@property (readonly, copy, nonatomic) NSDictionary *rawDataDict;
@property (readonly, nonatomic) IESECRecommendItemRawAdDataModel *rawAdData;
@property (nonatomic) double showTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
