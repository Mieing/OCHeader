@class NSString;

@interface WCFinderFilePickLimiter : NSObject

@property (nonatomic) long long minDurationLimit;
@property (retain, nonatomic) NSString *minDurationToast;
@property (nonatomic) long long maxDurationLimit;
@property (retain, nonatomic) NSString *maxDurationToast;
@property (nonatomic) long long maxFileSizeLimit;
@property (retain, nonatomic) NSString *maxFileSizeToast;
@property (nonatomic) unsigned long long forbidenMediaType;
@property (retain, nonatomic) NSString *forbidenMediaTypeToast;

- (BOOL)testDuration:(unsigned long long *)a0 filesize:(unsigned long long *)a1;
- (BOOL)showToastDuration:(unsigned long long *)a0 filesize:(unsigned long long *)a1;
- (id)showToastReturnWordingDuration:(unsigned long long *)a0 filesize:(unsigned long long *)a1;
- (id)_showToastDuration:(unsigned long long *)a0 filesize:(unsigned long long *)a1;
- (long long)limitTypeForDuration:(unsigned long long *)a0 filesize:(unsigned long long *)a1;
- (void).cxx_destruct;

@end
