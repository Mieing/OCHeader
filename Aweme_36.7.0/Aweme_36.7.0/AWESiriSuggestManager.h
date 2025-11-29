@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AWESiriSuggestManager : NSObject

@property (nonatomic) long long videoCounter;
@property (copy, nonatomic) NSString *lastScene;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *donateQueue;

+ (void)trackWidgetDonation:(id)a0 status:(BOOL)a1 error:(id)a2;
+ (id)sharedInstance;

- (void)donateWidgetSuggestionWithKind:(id)a0;
- (void)trackSiriScene:(id)a0 donateFailInfo:(id)a1;
- (void)refactoredSiriDonationWithPayload:(id)a0;
- (void)legacyDonateUserActivityWithType:(id)a0 userInfo:(id)a1 extraTrackParams:(id)a2 usingV3:(BOOL)a3 requestScene:(unsigned long long)a4 timingType:(unsigned long long)a5;
- (BOOL)checkFrequencyControlForWidget:(id)a0;
- (BOOL)checkIfHitAwemeWidgetReverseABWithKind:(id)a0;
- (void)donateUserActivityWithType:(id)a0 userInfo:(id)a1 extraTrackParams:(id)a2 usingV3:(BOOL)a3 requestScene:(unsigned long long)a4 timingType:(unsigned long long)a5;
- (id)widgetKindForType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
