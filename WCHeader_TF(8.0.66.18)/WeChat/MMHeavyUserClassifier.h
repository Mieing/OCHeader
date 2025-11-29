@class MMHeavyUserDataSource, NSObject;
@protocol MMHeavyUserClassifierDelegate, OS_dispatch_queue;

@interface MMHeavyUserClassifier : NSObject {
    MMHeavyUserDataSource *m_dataSource;
    unsigned long long m_contactCountStandard;
    unsigned long long m_sessionCountStandard;
    unsigned long long m_wechatSizeStandard;
    double m_finderAECStandard;
    double m_liveWatchRateStandard;
    NSObject<OS_dispatch_queue> *m_calQueue;
}

@property (weak, nonatomic) id<MMHeavyUserClassifierDelegate> delegate;

+ (BOOL)isContactsType:(unsigned long long)a0;
+ (BOOL)isSessionType:(unsigned long long)a0;
+ (BOOL)isFileSpaceType:(unsigned long long)a0;
+ (BOOL)isFinderType:(unsigned long long)a0;
+ (BOOL)isLiveType:(unsigned long long)a0;

- (id)initWithDataSource:(id)a0 withQueue:(id)a1;
- (BOOL)isHeavyUser;
- (unsigned long long)heavyUserType;
- (void)reclassify;
- (void)p_heavyUserTypeChange:(unsigned long long)a0;
- (void)checkContactType;
- (void)checkSessionType;
- (void)checkFileSpaceType;
- (void)checkFinderType;
- (void)checkLiveType;
- (void).cxx_destruct;

@end
