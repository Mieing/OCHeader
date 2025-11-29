@class IESFeatureKeyHistoryRecorder, IESFeatureInfoRecorder, NSLock, NSMutableSet;

@interface IESECommerceFeatures : NSObject

@property (retain, nonatomic) IESFeatureKeyHistoryRecorder *keyRecorder;
@property (retain, nonatomic) IESFeatureInfoRecorder *infoRecorder;
@property (nonatomic) long long maxHistoryCount;
@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) NSMutableSet *subtypes;
@property (nonatomic) BOOL hasSetup;
@property (nonatomic) BOOL enabled;

- (void)trackEvent:(unsigned long long)a0 withParams:(id)a1;
- (BOOL)fillFeatures:(id)a0 withConfig:(id)a1 inputData:(id)a2;
- (void)appWillTerminateNotification:(id)a0;
- (BOOL)isEcomLive:(id)a0;
- (id)getOrCreateHistoryWithAID:(id)a0 needUpdate:(BOOL)a1;
- (BOOL)fillTrackInfoWithModel:(id)a0 aid:(id)a1;
- (id)getRealValuesForKey:(id)a0 withAid:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)appDidEnterBackground:(id)a0;
- (void)saveRecords;
- (void)setupIfNeeded;

@end
