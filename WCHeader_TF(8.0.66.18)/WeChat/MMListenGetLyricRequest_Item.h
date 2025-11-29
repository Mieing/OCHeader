@class NSString, MMListenRecommendInfo;

@interface MMListenGetLyricRequest_Item : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *listenId;
@property (nonatomic) int type;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) BOOL getTts;
@property (nonatomic) BOOL getLyric;
@property (nonatomic) BOOL forceFullVersion;
@property (retain, nonatomic) MMListenRecommendInfo *ctxRecommendInfo;

+ (void)initialize;

@end
