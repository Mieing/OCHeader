@class NSString, NSMutableDictionary, NSTimer;

@interface QBIPListManager : NSObject {
    BOOL _hasGetIPList;
}

@property (retain, nonatomic) NSMutableDictionary *ssidToIpTypeDicts;
@property (nonatomic) long long spdyEnableFlag;
@property (retain) NSString *currentSSID;
@property (retain) NSString *gettingIpListSSID;
@property (retain) NSTimer *getIpListTimer;
@property (retain, nonatomic) NSTimer *iplistFrequencyControlTimer;
@property (nonatomic) long long iplistFrequencyControlCount;
@property (retain, nonatomic) NSString *spdyStartIp;
@property (nonatomic) BOOL hadFetchedIplist;
@property (readonly, nonatomic) BOOL spdyAvailable;
@property int spdy_bProxy;
@property BOOL isDefaultUseProxy;
@property BOOL hadGetIPList;

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)init;
- (void)dealloc;
- (void)enableSpdy;
- (void)disableSpdy;
- (void)getIpListFromServer:(id)a0;
- (BOOL)haveToGetIpList;
- (id)getMobileNetworkSSID;
- (void)getIPListWhenAPNChanged:(BOOL)a0;
- (void)saveIpLists:(id)a0 apnType:(id)a1 ipType:(long long)a2 totalPollNum:(long long)a3 lifePeriod:(long long)a4;
- (void)saveDataToFileAndClear;
- (void)statSpdyStartIp;
- (id)getCurrentIpOfType:(int)a0;
- (void)clearFrequencyControlTimer;
- (void)getIpListFrequencyControl;
- (BOOL)failCurrentIpOfType:(int)a0;
- (id)getSPDYServer;
- (id)getWupProxyServer;
- (void).cxx_destruct;

@end
