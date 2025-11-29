@class NSArray;

@interface AWEIMNotificationOwnPostedDanmakuResponseModel : AWEBaseApiModel

@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSArray *danmakuNoticeList;

+ (id)hasMoreJSONTransformer;
+ (id)danmakuNoticeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
