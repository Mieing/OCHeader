@class NSString, NSArray, NSData, NSDictionary, NSObject;
@protocol BDByteCastLogDelegate, BDByteCastMonitorDelegate;

@interface BDByteCastConfiguration : NSObject

@property (class, copy, nonatomic) NSString *appID;
@property (class, copy, nonatomic) NSString *deviceId;
@property (class, copy, nonatomic) NSString *channel;
@property (class, copy, nonatomic) NSString *chromecastReceiverAppID;
@property (class, copy, nonatomic) NSString *dialApplicationName;
@property (class, copy, nonatomic) NSString *grayConfigDomain;
@property (class, copy, nonatomic) NSString *tokenDomain;
@property (class, copy, nonatomic) NSString *smartViewReceiverAppID;

@property (nonatomic) BOOL enableDialEncryption;
@property (copy, nonatomic) NSData *licenseData;
@property (copy, nonatomic) NSString *projectId;
@property (copy, nonatomic) NSArray *sortedProtocolArray;
@property (copy, nonatomic) NSString *leboAppID;
@property (copy, nonatomic) NSString *leboSecretKey;
@property (copy, nonatomic) id /* block */ leboAuthCallback;
@property (weak, nonatomic) NSObject<BDByteCastLogDelegate> *logDelegate;
@property (weak, nonatomic) id<BDByteCastMonitorDelegate> monitorDelegate;
@property (nonatomic) BOOL enableConsoleLog;
@property (copy, nonatomic) NSString *deviceName;
@property (copy, nonatomic) NSDictionary *externalCommonExtraDataDictionary;
@property (copy, nonatomic) NSArray *dlnaXmlParserKeyArray;
@property (nonatomic) BOOL httpServerRunInBackground;
@property (nonatomic) unsigned long long linkBleState;
@property (nonatomic) BOOL enableBdlinkSsdp;
@property (nonatomic) BOOL enableBdlinkSsdpBroadcast;
@property (copy, nonatomic) NSArray *disPlayTypes;
@property (nonatomic) BOOL enableAutoRestartHttpServer;
@property (nonatomic) BOOL stopCastingWhenDisconnect;
@property (nonatomic) BOOL enableAutoSubscribeForCustomDLNADevice;
@property (nonatomic) BOOL closeDLNAStopAction;
@property (copy, nonatomic) NSArray *stopActionManufacturerList;
@property (nonatomic) BOOL useDLNACustomizedService;
@property (copy, nonatomic) id /* block */ getABValueBlock;
@property (copy, nonatomic) id /* block */ getSettingsValueBlock;
@property (nonatomic) BOOL useMultiThreadForNetService;
@property (nonatomic) BOOL enableDLNAMediaInfoQuery;
@property (nonatomic) long long maxQueryMediaStateCount;
@property (nonatomic) long long bdleTransmissionStrategy;
@property (nonatomic) BOOL enableBDLEMessageBusV2;
@property (copy, nonatomic) NSDictionary *bdleMessageBusParams;
@property (nonatomic) BOOL enableBDLEStatusSyncWithDLNA;

- (id)abValueForKey:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)settingsValueForKey:(id)a0;

@end
