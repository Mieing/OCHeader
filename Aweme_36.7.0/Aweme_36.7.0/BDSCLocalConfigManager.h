@class NSMutableDictionary;
@protocol BDSCUIDefaultConfigProtocol, BDSCAppConfigProtocol;

@interface BDSCLocalConfigManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *configDict;
@property (nonatomic) unsigned long long uiConfigType;
@property (retain, nonatomic) id<BDSCUIDefaultConfigProtocol> uiConfig;
@property (retain, nonatomic) id<BDSCUIDefaultConfigProtocol> searchUIConfig;
@property (retain, nonatomic) id<BDSCAppConfigProtocol> appConfig;

+ (id)defaultManager;

- (id)uiConfigWithType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
