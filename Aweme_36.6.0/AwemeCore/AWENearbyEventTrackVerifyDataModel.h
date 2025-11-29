@class NSArray, NSString;

@interface AWENearbyEventTrackVerifyDataModel : NSObject

@property (copy, nonatomic) NSArray *originVerifyRuleArray;
@property (copy, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSArray *verifyRulerGroup;

- (void)handleVerifyRuleArray;
- (id)initWithRuleGroup:(id)a0 eventName:(id)a1;
- (void).cxx_destruct;

@end
