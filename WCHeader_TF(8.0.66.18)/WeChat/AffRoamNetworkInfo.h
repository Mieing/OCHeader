@class NSString;

@interface AffRoamNetworkInfo : WXPBGeneratedMessage

@property (nonatomic) int netType;
@property (nonatomic) BOOL isConnected;
@property (retain, nonatomic) NSString *ssid;
@property (nonatomic) BOOL useMmaoa;
@property (nonatomic) int fileDescriptor;

+ (void)initialize;

- (void)setFileDescriptor:(int)a0;
- (int)fileDescriptor;
- (void)setUseMmaoa:(BOOL)a0;
- (BOOL)useMmaoa;
- (void)setSsid:(id)a0;
- (id)ssid;
- (void)setIsConnected:(BOOL)a0;
- (BOOL)isConnected;
- (void)setNetType:(int)a0;
- (int)netType;

@end
