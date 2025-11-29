@class NSString, NSDictionary, NSArray, IESLLLiveShelfTopbarNewShelfModel;

@interface IESLLLiveShelfTopBarModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *orderCenterUrl;
@property (copy, nonatomic) NSDictionary *originData;
@property (copy, nonatomic) NSString *poiDetailAddress;
@property (copy, nonatomic) NSString *poiTag;
@property (copy, nonatomic) NSString *poiProvince;
@property (copy, nonatomic) NSString *poiDistance;
@property (nonatomic) unsigned long long poiTopbarVersion;
@property (copy, nonatomic) NSArray *tabList;
@property (nonatomic) unsigned long long barType;
@property (retain, nonatomic) IESLLLiveShelfTopbarNewShelfModel *topbarShelf;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tabListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
