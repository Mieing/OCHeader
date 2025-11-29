@class NSString;

@interface IESLiveSearchFrequencyManager : NSObject

@property (nonatomic) BOOL hitLimit;
@property (nonatomic) BOOL shouldLoginLimit;
@property (copy, nonatomic) NSString *statusMsg;

- (BOOL)checkHitLimitWithStatusCode:(id)a0 andStatusMsg:(id)a1;
- (BOOL)getHitLimit:(id)a0 StatusMsg:(id)a1;
- (void).cxx_destruct;

@end
