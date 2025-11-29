@class NSString;

@interface AWESearchFrequencyManager : NSObject

@property (nonatomic) BOOL hitLimit;
@property (nonatomic) BOOL shouldLoginLimit;
@property (copy, nonatomic) NSString *statusMsg;

- (BOOL)checkHitLimitWithStatusCode:(id)a0 andStatusMsg:(id)a1;
- (void).cxx_destruct;

@end
