@class NSMutableDictionary, NSMutableArray;

@interface AWEApplicationIdleTimerManager : NSObject

@property (nonatomic) BOOL isLastValueValid;
@property (nonatomic) BOOL lastIdleTimerDisabledValue;
@property (nonatomic) unsigned long long currentMode;
@property (nonatomic) unsigned long long currentModePriority;
@property (retain, nonatomic) NSMutableDictionary *livePreStreamStatus;
@property (retain, nonatomic) NSMutableArray *liveRoomStatus;

+ (BOOL)enable;
+ (id)sharedManager;

- (BOOL)setForceLockWithKey:(id)a0 priority:(unsigned long long)a1;
- (BOOL)unsetForceLockWithKey:(id)a0;
- (void)setNeverLockWithLiveRoomIdentifier:(id)a0;
- (void)setAutoLockWithLiveRoomIdentifier:(id)a0;
- (void)removeWithLiveStreamIdentifier:(id)a0;
- (void)setAutoLockWithLiveStreamIdentifier:(id)a0;
- (void)setNeverLockWithLiveStreamIdentifier:(id)a0;
- (void)didChangeValueForIdleTimerDisabled:(BOOL)a0;
- (BOOL)setNeverLockWithKey:(id)a0 priority:(unsigned long long)a1;
- (void)updateLiveStreamNeverLockFlag;
- (BOOL)unsetNeverLockWithKey:(id)a0;
- (void)updateLiveRoomNeverLockFlag;
- (void).cxx_destruct;
- (id)init;

@end
