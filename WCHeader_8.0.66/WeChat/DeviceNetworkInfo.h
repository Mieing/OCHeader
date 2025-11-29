@class NSString, NSMutableArray;

@interface DeviceNetworkInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *sdkId;
@property (retain, nonatomic) NSMutableArray *deviceNetworkCardList;
@property (nonatomic) BOOL isOnline;
@property (retain, nonatomic) NSString *discoveryPort;

+ (void)initialize;

@end
