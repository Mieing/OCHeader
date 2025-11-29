@class NSString, MMKV, HMDThreadSafeDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AWESiriDynamicLimitCalculator : NSObject

@property (nonatomic) long long todayDonationCount;
@property (retain, nonatomic) HMDThreadSafeDictionary *donationCache;
@property (retain, nonatomic) NSString *todayKey;
@property (retain, nonatomic) MMKV *mmkv;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *writeQueue;

+ (id)sharedInstance;

- (id)todayString;
- (void)flushDonationCount;
- (long long)calculateDynamicQuota;
- (id)currentLimitConfig;
- (id)dateStringDaysAgo:(long long)a0;
- (void)recordDonationForToday;
- (BOOL)isTodayDonationExceededQuota;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground;
- (id)init;
- (void)applicationWillTerminate;
- (id)sharedDateFormatter;

@end
