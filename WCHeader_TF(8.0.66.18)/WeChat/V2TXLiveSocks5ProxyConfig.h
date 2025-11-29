@interface V2TXLiveSocks5ProxyConfig : NSObject

@property (nonatomic) BOOL supportHttps;
@property (nonatomic) BOOL supportTcp;
@property (nonatomic) BOOL supportUdp;

- (id)init;

@end
