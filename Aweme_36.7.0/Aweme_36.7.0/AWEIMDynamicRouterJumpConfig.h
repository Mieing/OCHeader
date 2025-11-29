@class NSString, NSArray;

@interface AWEIMDynamicRouterJumpConfig : NSObject

@property (copy, nonatomic) NSString *targetSchemaKey;
@property (copy, nonatomic) NSString *defaultSchema;
@property (copy, nonatomic) NSString *originSchema;
@property (nonatomic) BOOL enableMergeParams;
@property (copy, nonatomic) NSArray *needMergeParamsDictionaryArray;

- (void).cxx_destruct;

@end
