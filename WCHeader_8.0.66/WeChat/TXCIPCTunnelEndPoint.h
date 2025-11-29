@class NSURL, NSString;

@interface TXCIPCTunnelEndPoint : NSObject

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *host;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long port;

- (id)initWithAppGroup:(id)a0;
- (id)initWithPort:(long long)a0;
- (void).cxx_destruct;

@end
