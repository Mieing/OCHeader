@class SimpleRingBack;

@interface ReportRingBackResponseInfo : WXPBGeneratedMessage

@property (retain, nonatomic) SimpleRingBack *simpleRingBack;
@property (nonatomic) int ret;

+ (void)initialize;

@end
