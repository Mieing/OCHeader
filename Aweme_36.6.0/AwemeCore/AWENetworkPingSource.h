@class NSString;

@interface AWENetworkPingSource : NSObject

@property (copy, nonatomic) NSString *hostName;
@property (nonatomic) unsigned long long port;

- (id)initWithHostName:(id)a0 port:(unsigned long long)a1;
- (void).cxx_destruct;

@end
