@class NSString;

@interface AWENetworkTCPPingHelper : NSObject {
    struct sockaddr_in { unsigned char sin_len; unsigned char sin_family; unsigned short sin_port; struct in_addr { unsigned int s_addr; } sin_addr; char sin_zero[8]; } addr;
    int sock;
}

@property (readonly, copy) id /* block */ complete;
@property (copy, nonatomic) NSString *host;
@property (nonatomic) unsigned long long port;
@property (nonatomic) double timeout;

- (void)pingWithBlock:(id /* block */)a0;
- (void)sendAndRec;
- (id)convertDomainToIp:(id)a0;
- (void)complete:(BOOL)a0 latency:(double)a1;
- (void).cxx_destruct;
- (int)connect:(struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } *)a0;
- (id)init;

@end
