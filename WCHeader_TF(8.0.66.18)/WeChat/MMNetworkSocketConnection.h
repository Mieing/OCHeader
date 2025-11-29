@interface MMNetworkSocketConnection : NSObject

@property (nonatomic) int sockfd;
@property (readonly, nonatomic) void *sockaddr;
@property (nonatomic) unsigned long long interfaceType;

- (id)initWithSockfd:(int)a0;
- (void)dealloc;
- (void)setSockaddr:(const void *)a0 addrlen:(unsigned int)a1;

@end
