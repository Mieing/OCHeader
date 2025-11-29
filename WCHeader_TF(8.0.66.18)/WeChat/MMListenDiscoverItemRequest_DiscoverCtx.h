@class NSString, MMListenRecommendInfo;

@interface MMListenDiscoverItemRequest_DiscoverCtx : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *discoverLineId;
@property (retain, nonatomic) NSString *discoverId;
@property (retain, nonatomic) MMListenRecommendInfo *ctxRecommendInfo;

+ (void)initialize;

@end
