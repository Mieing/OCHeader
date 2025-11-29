@class IESFeatureInfoRecorder, NSLock, IESFeatureKeyHistoryRecorder;

@interface IESUserPageFeatures : NSObject

@property (retain, nonatomic) IESFeatureKeyHistoryRecorder *keyRecorder;
@property (retain, nonatomic) IESFeatureInfoRecorder *infoRecorder;
@property (retain, nonatomic) NSLock *lock;
@property (nonatomic) long long maxHistoryCount;
@property (nonatomic) BOOL hasSetup;
@property (nonatomic) BOOL enabled;

- (void)trackEvent:(unsigned long long)a0 withParams:(id)a1;
- (BOOL)fillFeatures:(id)a0 withConfig:(id)a1 inputData:(id)a2;
- (void)appWillTerminateNotification:(id)a0;
- (id)getOrCreateFeatureInfoWithID:(id)a0;
- (BOOL)fillTrackInfoWithGroupID:(id)a0 userID:(id)a1;
- (BOOL)isUserPageEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)appDidEnterBackground:(id)a0;
- (void)saveRecords;
- (void)setupIfNeeded;

@end
