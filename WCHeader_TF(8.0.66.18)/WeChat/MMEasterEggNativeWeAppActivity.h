@class NSString, WCCgiBlockHelper, NSDictionary, MMEasterEggNativeWeAppActivityInfo;
@protocol MMEasterEggActivityDelegate;

@interface MMEasterEggNativeWeAppActivity : NSObject <MMEasterEggActivity>

@property (retain, nonatomic) WCCgiBlockHelper *cgiBlockHelper;
@property (retain, nonatomic) NSDictionary *prizeDict;
@property (nonatomic) unsigned int probability;
@property (retain, nonatomic) MMEasterEggNativeWeAppActivityInfo *activityInfo;
@property (retain, nonatomic) NSString *activityId;
@property (weak, nonatomic) id<MMEasterEggActivityDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithActivityInfo:(id)a0;
- (void)showNewYearBag;
- (void)easterEggStartWithKeyword:(id)a0 reportString:(id *)a1;
- (void)easterEggTapInteractiveUIWithReportString:(id *)a0;
- (void)easterEggEnd;
- (void).cxx_destruct;

@end
