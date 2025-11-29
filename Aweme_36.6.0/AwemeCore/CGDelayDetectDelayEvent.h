@class NSString, NSTimer;

@interface CGDelayDetectDelayEvent : NSObject

@property (nonatomic) double ts;
@property (copy, nonatomic) NSString *checkID;
@property (retain, nonatomic) NSTimer *timeOutTimer;
@property (nonatomic) long long timeOutPeriod;
@property (copy, nonatomic) id /* block */ timeOutBlock;

- (void)timeoutDidOccur;
- (id)initWithTS:(double)a0;
- (void)detectSuccess;
- (void).cxx_destruct;
- (void)dealloc;

@end
