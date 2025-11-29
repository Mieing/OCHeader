@class NSString, WCCgiBlockHelper, MMEasterEggNewYearActivityInfo;
@protocol MMEasterEggActivityDelegate;

@interface MMEasterEggNewYearActivity : NSObject <MMEasterEggNewYearActivityViewControllerDelegate, MMEasterEggActivity>

@property (retain, nonatomic) NSString *keyword;
@property (retain, nonatomic) NSString *traceId;
@property (retain, nonatomic) WCCgiBlockHelper *prepareCgiBlockHelper;
@property (retain, nonatomic) MMEasterEggNewYearActivityInfo *activityInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *activityId;
@property (weak, nonatomic) id<MMEasterEggActivityDelegate> delegate;

- (id)initWithActivityInfo:(id)a0;
- (void)showLuckyBag;
- (void)easterEggStartWithKeyword:(id)a0 reportString:(id *)a1;
- (void)easterEggTapInteractiveUIWithReportString:(id *)a0;
- (void)easterEggEnd;
- (double)materialCgiTotalTimeout;
- (id)getTraceId;
- (void).cxx_destruct;

@end
