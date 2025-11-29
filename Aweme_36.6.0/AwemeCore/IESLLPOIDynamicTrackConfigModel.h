@class NSArray, NSDictionary;

@interface IESLLPOIDynamicTrackConfigModel : NSObject

@property (nonatomic) BOOL shouldDisableDynamic;
@property (copy, nonatomic) NSArray *supportDynamicParamsNodesArray;
@property (copy, nonatomic) NSDictionary *paramsConfig;

+ (id)configInstanceWithDictionary:(id)a0;

- (id)fetchConfigWithKey:(id)a0;
- (void).cxx_destruct;

@end
