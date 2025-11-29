@class NSString, NSNumber, NSDate;

@interface AWEIMEntryQuickReplyDormancy : NSObject

@property (copy, nonatomic) NSString *uid;
@property (retain, nonatomic) NSDate *today;
@property (retain, nonatomic) NSNumber *result;
@property (nonatomic) long long displayNDays;
@property (nonatomic) long long dormantMDays;
@property (copy, nonatomic) NSString *version;

+ (void)resetDisplayedDays;
+ (BOOL)isDormantCacheWithNowDate:(id)a0 uid:(id)a1;
+ (BOOL)p_isDormantWithNowDate:(id)a0 uid:(id)a1;
+ (void)p_resetDisplayedDaysWithDate:(id)a0;
+ (id)sharedInstance;
+ (BOOL)isDormant;

- (void).cxx_destruct;

@end
