@class NSArray, NSDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AWEWidgetDonationConfigManager : NSObject

@property (nonatomic) BOOL disableOldDonationTimeABValue;
@property (nonatomic) BOOL currentWidgetNotInstallDonateABValue;
@property (nonatomic) BOOL notInstallWidgetDonateABValue;
@property (copy, nonatomic) NSArray *donationTimeArray;
@property (copy, nonatomic) NSArray *sceneSwitchListeners;
@property (copy, nonatomic) NSDictionary *fixMinDonateDict;
@property (retain, nonatomic) NSMutableArray *timerArray;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *timerQueue;

+ (id)sharedInstance;

- (void)widgetDonationABValueProcess;
- (void)startWidgetDonationSwitchListener;
- (void)startRepeatingTimer;
- (id)processTriggerTimeDict:(id)a0;
- (void)performWidgetDonate:(id)a0;
- (void)stopTimer;
- (void).cxx_destruct;

@end
