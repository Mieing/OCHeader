@class NSArray;

@interface AWECodeGenV1DanmakuListSelfNoticeResponse : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *danmakuNoticeListModelArray;
@property (nonatomic) BOOL hasMore;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
