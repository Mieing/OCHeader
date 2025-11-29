@class NSString;
@protocol AWEPerfEvaluateSmartServiceResultListener;

@interface AWEPerfEvaluateSmartService : AWEBaseSmartServiceImpl <AWEPerfEvaluateSmartService>

@property (nonatomic) BOOL shouldReportInputFeatures;
@property (weak, nonatomic) id<AWEPerfEvaluateSmartServiceResultListener> resultListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)abTestConfig;

@end
