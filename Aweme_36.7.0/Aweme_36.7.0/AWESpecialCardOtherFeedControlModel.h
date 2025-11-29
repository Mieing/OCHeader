@class NSString, NSNumber;

@interface AWESpecialCardOtherFeedControlModel : NSObject

@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) NSNumber *vvLimit;
@property (retain, nonatomic) NSNumber *timeHoursLimit;
@property (retain, nonatomic) NSNumber *timeHoursLimitCounter;
@property (nonatomic) long long lastExemptIndex;
@property (nonatomic) BOOL didShow;
@property (nonatomic) unsigned long long currentVVCount;
@property (nonatomic) unsigned long long notShowVVCount;
@property (nonatomic) BOOL isNewNetWorkRequest;
@property (nonatomic) double lastShowTime;

- (id)showStrategyTimeKey;
- (id)showStrategyLastAwemeIDKey;
- (void)configWithDictionary:(id)a0 referString:(id)a1;
- (void).cxx_destruct;

@end
