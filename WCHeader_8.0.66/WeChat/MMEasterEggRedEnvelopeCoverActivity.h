@class WCCgiBlockHelper, NSString, MMEasterEggRedEnvelopeCoverActivityInfo;
@protocol MMEasterEggActivityDelegate;

@interface MMEasterEggRedEnvelopeCoverActivity : NSObject <MMEasterEggActivity>

@property (retain, nonatomic) WCCgiBlockHelper *cgiBlockHelper;
@property (retain, nonatomic) NSString *URLString;
@property (retain, nonatomic) MMEasterEggRedEnvelopeCoverActivityInfo *activityInfo;
@property (retain, nonatomic) NSString *activityId;
@property (weak, nonatomic) id<MMEasterEggActivityDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithActivityInfo:(id)a0;
- (void)easterEggStartWithKeyword:(id)a0 reportString:(id *)a1;
- (void)easterEggTapInteractiveUIWithReportString:(id *)a0;
- (void)easterEggEnd;
- (void)showRedEnvelopeCoverBag;
- (BOOL)shouldTriggerRequest;
- (double)triggerProbability;
- (void).cxx_destruct;

@end
