@class NSArray;

@interface AWEIMCodeGenFileGetResponseModel : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *fileListModelArray;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long nextCursor;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
