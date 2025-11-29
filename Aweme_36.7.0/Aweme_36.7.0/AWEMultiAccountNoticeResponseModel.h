@class NSArray;

@interface AWEMultiAccountNoticeResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *counts;

+ (id)countsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)totalUnreadCount;
- (BOOL)hasNewUnreadNotice;
- (void).cxx_destruct;

@end
