@class UGCEmojiStatisticsInfo, BaseResponse;

@interface GetUGCEmojiStatisticsResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) UGCEmojiStatisticsInfo *ugcemojiStatisticsInfo;

+ (void)initialize;

@end
