@class NSString, NSMutableArray;

@interface MigrateMsgDeviceInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *addrInfo;
@property (retain, nonatomic) NSString *pcName;
@property (nonatomic) unsigned long long dataSize;
@property (retain, nonatomic) NSString *wifiName;

+ (void)initialize;

@end
