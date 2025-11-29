@class MMEasterEggGameActivityInfo, NSString;
@protocol MMEasterEggActivityDelegate;

@interface MMEasterEggGameActivity : NSObject <MMEasterEggActivity>

@property (retain, nonatomic) MMEasterEggGameActivityInfo *activityInfo;
@property (retain, nonatomic) NSString *activityId;
@property (weak, nonatomic) id<MMEasterEggActivityDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithActivityInfo:(id)a0;
- (void)showGameBag;
- (void)easterEggStartWithKeyword:(id)a0 reportString:(id *)a1;
- (void)easterEggTapInteractiveUIWithReportString:(id *)a0;
- (void)easterEggEnd;
- (void).cxx_destruct;

@end
