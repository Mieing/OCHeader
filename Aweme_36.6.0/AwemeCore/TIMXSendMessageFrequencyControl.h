@class TIMXSDKInstance, NSDate;

@interface TIMXSendMessageFrequencyControl : NSObject

@property (retain, nonatomic) NSDate *notAbleToSendBeforeDate;
@property (weak, nonatomic) TIMXSDKInstance *r;

- (BOOL)checkFrequencyControlWithMessage:(id)a0;
- (void)resetFrequencyControl;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
