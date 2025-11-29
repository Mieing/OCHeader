@class NSLock, IESHistoryFeedFeatureInfoHelper;

@interface IESRelatedFeatures : NSObject

@property (retain, nonatomic) IESHistoryFeedFeatureInfoHelper *relatedTitleHistoryHelper;
@property (retain, nonatomic) IESHistoryFeedFeatureInfoHelper *relatedBarHistoryHelper;
@property (retain, nonatomic) IESHistoryFeedFeatureInfoHelper *relatedRecommendHistoryHelper;
@property (nonatomic) long long maxHistoryCount;
@property (retain, nonatomic) NSLock *lock;
@property (nonatomic) BOOL hasSetup;
@property (nonatomic) BOOL enabled;

- (void)trackEvent:(unsigned long long)a0 withParams:(id)a1;
- (BOOL)fillFeatures:(id)a0 withConfig:(id)a1 inputData:(id)a2;
- (void)appWillTerminateNotification:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)appDidEnterBackground:(id)a0;
- (void)saveRecords;
- (void)setupIfNeeded;

@end
