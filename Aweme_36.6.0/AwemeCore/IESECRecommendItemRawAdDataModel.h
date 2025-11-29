@class NSString, NSArray, IESECRecommendItemRawAdOpenUrlParams;

@interface IESECRecommendItemRawAdDataModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long adID;
@property (nonatomic) long long creativeID;
@property (nonatomic) long long groupID;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSArray *trackUrlList;
@property (copy, nonatomic) NSArray *clickTrackUrlList;
@property (retain, nonatomic) IESECRecommendItemRawAdOpenUrlParams *openUrlParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
