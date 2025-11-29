@class NSString;

@interface MMListenPlayResponse_MMListenTTSPlayUrl : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *playUrl;
@property (nonatomic) BOOL isHls;
@property (nonatomic) int duration;

+ (void)initialize;

@end
