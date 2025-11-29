@class NSString;

@interface MMListenPlayResponse_MMListenPlayUrl : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *playUrl;
@property (nonatomic) int type;
@property (retain, nonatomic) NSString *encryptKey;
@property (retain, nonatomic) NSString *cacheKey;

+ (void)initialize;

@end
