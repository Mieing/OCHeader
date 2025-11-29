@class NSDate, NSString, AWEAntiAddictTimeCounter;
@protocol AWEAntiAddictCounterProtocol;

@interface AWEAntiAddictTimeDriver : NSObject <AWEAntiAddictLogProtocol>

@property (retain) AWEAntiAddictTimeCounter *timeCounter;
@property (retain) NSDate *lastActiveDate;
@property (retain) NSDate *lastResignDate;
@property (readonly) id<AWEAntiAddictCounterProtocol> counter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)counterClass;
+ (id)createCounterInstance;
+ (id)moduleName;

- (id)initWithCounter:(id)a0 activeDate:(id)a1;
- (void)updateDataToDate:(id)a0;
- (void)loginStateChangedAtDate:(id)a0;
- (void)appDidBecomeActiveAtDate:(id)a0;
- (void)appWillResignActiveAtDate:(id)a0;
- (void)appWillTerminateAtDate:(id)a0;
- (void)updateCounterWithStartDate:(id)a0 andEndDate:(id)a1;
- (void).cxx_destruct;

@end
