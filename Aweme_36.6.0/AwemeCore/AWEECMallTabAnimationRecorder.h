@class NSString, AWEStorage, NSMutableDictionary;

@interface AWEECMallTabAnimationRecorder : NSObject

@property (copy, nonatomic) NSString *recordKey;
@property (nonatomic) double activeDuration;
@property (retain, nonatomic) AWEStorage *storage;
@property (retain, nonatomic) NSMutableDictionary *tabAnimationRecords;

- (void)addNotification;
- (id)initWithRecordKey:(id)a0 activeDuration:(double)a1;
- (void)recordTabShowAnimation:(id)a0;
- (id)getTabShowAnimationRecords;
- (void)readCache;
- (void).cxx_destruct;
- (void)saveCache;
- (void)clearCache;
- (void)dealloc;
- (void)appWillResignActive;

@end
