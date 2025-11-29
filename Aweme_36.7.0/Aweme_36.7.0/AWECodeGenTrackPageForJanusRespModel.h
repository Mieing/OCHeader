@class NSArray, NSString;

@interface AWECodeGenTrackPageForJanusRespModel : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *cardListModelArray;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *extra;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
