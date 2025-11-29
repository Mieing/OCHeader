@class NSData, NSString, AudioRequestTrigger, BaseRequest, MMListenRecommendInfo, NSMutableArray, MMListenDiscardInfo, MMListenAudioBaseRequest;

@interface MMListenFeedMixedListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *categoryId;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (retain, nonatomic) MMListenRecommendInfo *ctxRecommendInfo;
@property (retain, nonatomic) NSMutableArray *topListenCtx;
@property (retain, nonatomic) MMListenDiscardInfo *discardInfo;
@property (nonatomic) BOOL isPreload;
@property (retain, nonatomic) NSData *syncSessionBuffer;
@property (retain, nonatomic) MMListenAudioBaseRequest *audioBaseRequest;
@property (nonatomic) int count;
@property (retain, nonatomic) AudioRequestTrigger *requestTrigger;

+ (void)initialize;

@end
