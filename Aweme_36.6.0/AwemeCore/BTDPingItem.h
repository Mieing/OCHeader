@class NSString;

@interface BTDPingItem : NSObject

@property (retain, nonatomic) NSString *originalAddress;
@property (copy, nonatomic) NSString *IPAddress;
@property (nonatomic) unsigned long long dateBytesLength;
@property (nonatomic) double timeMilliseconds;
@property (nonatomic) long long timeToLive;
@property (nonatomic) long long ICMPSequence;
@property (nonatomic) long long status;

+ (id)statisticsWithPingItems:(id)a0;

- (void).cxx_destruct;
- (id)description;

@end
