@class NSArray, NSString;

@interface AWECodeGenTrackTabForJanusRespModel : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *cardListModelArray;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL hasMore;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
