@class NSArray, NSDictionary, NSString;

@interface AWEHotSpotCacheCheckResponse : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *awemeIDs;
@property (copy, nonatomic) NSDictionary *awemeIDAndCommonBarInfoDict;
@property (copy, nonatomic) NSDictionary *checkResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
