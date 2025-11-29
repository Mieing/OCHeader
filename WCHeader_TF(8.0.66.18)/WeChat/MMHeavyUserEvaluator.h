@class MMHeavyUserDataSource, NSObject;
@protocol OS_dispatch_queue, MMHeavyUserEvaluatorDelegate;

@interface MMHeavyUserEvaluator : NSObject {
    MMHeavyUserDataSource *m_dataSource;
    unsigned long long m_contactCount;
    unsigned long long m_sessionCount;
    unsigned long long m_wechatSize;
    unsigned long long m_yesterDayDumpCount;
    double m_finderAEC;
    double m_liveWatchRate;
    NSObject<OS_dispatch_queue> *m_calQueue;
    float m_pointStandard;
}

@property (weak, nonatomic) id<MMHeavyUserEvaluatorDelegate> delegate;

+ (float)p_getGaussianCDFWithMu:(float)a0 withStd:(float)a1 withValue:(float)a2;

- (id)initWithDataSource:(id)a0 withQueue:(id)a1;
- (void)reevaluate;
- (unsigned long long)getHeavyUserPoint;
- (void)p_reloadData;
- (unsigned long long)p_evaluateHeavyUserPoint;
- (void).cxx_destruct;

@end
