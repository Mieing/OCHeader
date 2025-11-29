@interface QBBeaconLocalDataRecordInterface : NSObject {
    int maxTime;
}

@property (nonatomic) int cloudRealDelayDB;
@property (nonatomic) int cloudRealNumDB;

+ (id)sharedInstance;

- (id)init;
- (void)setPersistListener:(id)a0;
- (void)saveObject:(id)a0;
- (void)cloudParamInit;
- (void)initTimer;
- (void)clearTimer;
- (void)notifyToPersist;
- (void)doPersist;
- (void)flushObjectsToDB;

@end
