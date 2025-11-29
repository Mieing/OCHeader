@class NSString;

@interface HostAlgo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *host;
@property (nonatomic) unsigned int algo;

+ (void)initialize;

- (void)setAlgo:(unsigned int)a0;
- (unsigned int)algo;
- (void)setHost:(id)a0;
- (id)host;

@end
