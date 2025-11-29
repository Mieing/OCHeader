@class NSString, NSData, NSMutableArray, BaseResponse;

@interface RecommendPanelEmojiResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *emoji;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSData *pageBuff;
@property (nonatomic) unsigned long long reportRequestId;

+ (void)initialize;

@end
