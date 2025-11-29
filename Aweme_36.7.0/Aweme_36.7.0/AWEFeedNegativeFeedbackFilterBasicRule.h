@class NSString;
@protocol AWEFeedNegativeFeedbackFilterDataProtocol;

@interface AWEFeedNegativeFeedbackFilterBasicRule : NSObject <AWEFeedNegativeFeedbackFilterRuleProtocol>

@property (weak, nonatomic) id<AWEFeedNegativeFeedbackFilterDataProtocol> dataDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldBeFilteredWithModel:(id)a0;
- (void).cxx_destruct;

@end
