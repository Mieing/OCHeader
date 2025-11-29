@class NSArray, NSString;

@interface AWECodeGenV1MateCommitBatchResponse : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *commitResultModelArray;
@property (copy, nonatomic) NSString *commitMsg;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
