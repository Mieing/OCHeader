@class NSString, NSDictionary;

@interface QBBeaconLocalStrategy : QBBeaconPersistObject <QBBeaconAnaLocalObjInitWithWupProtocol>

@property (nonatomic) int zipAlg;
@property (nonatomic) int encAlg;
@property (retain, nonatomic) NSString *encKey;
@property (retain, nonatomic) NSString *encPubKey;
@property (nonatomic) int dbMaxSize;
@property (retain, nonatomic) NSDictionary *cloudParas;
@property (nonatomic) int queryInterval;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSDictionary *moduleStrategys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)initLocalObjWithWupBuffer:(id)a0;
- (BOOL)addModuleStrategy:(id)a0;
- (id)getStrategyForKey:(int)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
