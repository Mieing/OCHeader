@class NSString, NSArray, NSDictionary, NSNumber;

@interface AWEInTodayAggregatedAssetInfo : MTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) NSString *assetType;
@property (readonly, copy, nonatomic) NSArray *tempFilePaths;
@property (readonly, copy, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) NSNumber *createTime;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithAssetType:(id)a0 localIdentifier:(id)a1 tempFilePath:(id)a2 createTime:(id)a3;
- (void).cxx_destruct;

@end
