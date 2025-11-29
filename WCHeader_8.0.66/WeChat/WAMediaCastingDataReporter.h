@class NSString;

@interface WAMediaCastingDataReporter : NSObject

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *pagePath;
@property (nonatomic) unsigned int appServiceType;
@property (nonatomic) unsigned int component;

- (id)initWithAppID:(id)a0 pagePath:(id)a1 appServiceType:(unsigned int)a2 component:(unsigned int)a3;
- (void)reportDeviceCount:(unsigned long long)a0 eventType:(unsigned long long)a1 videoState:(unsigned long long)a2 videoURI:(id)a3;
- (void)reportCastingResult:(BOOL)a0 eventType:(unsigned long long)a1 modelName:(id)a2 manufacturer:(id)a3 videoState:(unsigned long long)a4 protocolType:(unsigned long long)a5 videoURI:(id)a6;
- (void)reportClickWithEventType:(unsigned long long)a0 videoState:(unsigned long long)a1 protocolType:(unsigned long long)a2 videoURI:(id)a3;
- (void)reportUserSelectWithVideoState:(unsigned long long)a0 modelName:(id)a1 manufacturer:(id)a2 protocolType:(unsigned long long)a3 videoURI:(id)a4;
- (id)generateReportItemWithEventType:(unsigned long long)a0 videoState:(unsigned long long)a1 videoURI:(id)a2;
- (void).cxx_destruct;

@end
