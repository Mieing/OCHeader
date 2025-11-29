@class NSDictionary, NSMutableDictionary;

@interface AWESearchPreRequestProviderConfig : NSObject

@property (retain, nonatomic) NSDictionary *providerMappingConfig;
@property (retain, nonatomic) NSDictionary *verticalProviderMappingConfig;
@property (retain, nonatomic) NSMutableDictionary *compareBlockMutDic;

+ (id)sharedInstanced;

- (id)verticalProviderMapping;
- (void)registerPreRequestParamsCustomCompareBlock:(id)a0;
- (void).cxx_destruct;
- (id)providerMapping;

@end
