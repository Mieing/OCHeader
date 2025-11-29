@class NSString;

@interface BDLinkSsdpDevice : NSObject

@property (copy, nonatomic) NSString *ip;
@property (nonatomic) unsigned short port;
@property (copy, nonatomic) NSString *deviceName;
@property (copy, nonatomic) NSString *deviceId;
@property (copy, nonatomic) NSString *protocolVersion;
@property (copy, nonatomic) NSString *sinkVersion;

- (void).cxx_destruct;

@end
