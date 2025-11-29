@class IESFollowFeatureInfo, NSString, IESFollowLaunchFeatureInfo, IESFeatureKeyHistoryRecorder, IESFeatureInfoRecorder, NSLock, NSMutableSet;

@interface IESFollowFeatures : NSObject

@property (retain, nonatomic) IESFeatureKeyHistoryRecorder *keyRecorder;
@property (retain, nonatomic) IESFeatureInfoRecorder *infoRecorder;
@property (nonatomic) long long maxHistoryCount;
@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) NSMutableSet *subtypes;
@property (retain, nonatomic) NSString *noticeType;
@property (nonatomic) long long noticeCount;
@property (nonatomic) long long countEnterFollow;
@property (nonatomic) unsigned long long lastRunTimems;
@property (retain, nonatomic) IESFollowFeatureInfo *currentInfo;
@property (retain, nonatomic) IESFollowLaunchFeatureInfo *launchInfo;
@property (retain, nonatomic) IESFeatureKeyHistoryRecorder *launchKeyRecorder;
@property (retain, nonatomic) IESFeatureInfoRecorder *launchInfoRecorder;
@property (nonatomic) BOOL hasSetup;
@property (nonatomic) BOOL enabled;

- (void)trackEvent:(unsigned long long)a0 withParams:(id)a1;
- (BOOL)fillFeatures:(id)a0 withConfig:(id)a1 inputData:(id)a2;
- (void)appWillTerminateNotification:(id)a0;
- (BOOL)config:(id)a0 containSubType:(id)a1;
- (long long)getEnterFollowTabCount;
- (id)getOrCreateLaunchHistoryWithTimeKey:(id)a0;
- (void)saveLaunchRecords;
- (id)getOrCreateHistoryWithTimeKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)appDidEnterBackground:(id)a0;
- (void)saveRecords;
- (void)setupIfNeeded;

@end
