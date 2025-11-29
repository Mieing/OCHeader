@class NSString;

@interface AffRoamNetworkInfo : WXPBGeneratedMessage

@property (nonatomic) int netType;
@property (nonatomic) BOOL isConnected;
@property (retain, nonatomic) NSString *ssid;
@property (nonatomic) BOOL useMmaoa;
@property (nonatomic) int fileDescriptor;

+ (void)initialize;

@end
