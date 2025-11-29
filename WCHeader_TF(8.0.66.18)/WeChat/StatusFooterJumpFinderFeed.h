@class NSString;

@interface StatusFooterJumpFinderFeed : WXPBGeneratedMessage

@property (nonatomic) unsigned long long feedId;
@property (retain, nonatomic) NSString *nonceId;

+ (void)initialize;

- (void)setNonceId:(id)a0;
- (id)nonceId;
- (void)setFeedId:(unsigned long long)a0;
- (unsigned long long)feedId;

@end
