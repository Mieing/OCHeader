@class NSString, NSArray;

@interface WXTalkDNSController : NSObject {
    unsigned int _netType;
}

@property (retain, nonatomic) NSString *relayIP;
@property (nonatomic) unsigned int relayPort;
@property (retain, nonatomic) NSArray *relayIPList;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
