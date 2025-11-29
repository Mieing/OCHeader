@class NSString;

@interface SegementBundle : NSObject

@property (nonatomic) int segementIndex;
@property (nonatomic) long long playStartTime;
@property (nonatomic) long long playEndTime;
@property (nonatomic) long long playDuration;
@property (nonatomic) long long playSize;
@property (nonatomic) long long downloadSize;
@property (copy, nonatomic) NSString *p2pXcdnDetail;
@property (copy, nonatomic) NSString *streamSuffix;
@property (copy, nonatomic) NSString *codecType;
@property (copy, nonatomic) NSString *playFormat;
@property long long svcPlayType;

- (void).cxx_destruct;

@end
