@class NSDictionary;

@interface IESLiveMessageExtraProcessor : IESLiveMessageProcesser

@property (copy, nonatomic) NSDictionary *realMessagesCondition;
@property (copy, nonatomic) NSDictionary *delayMessagesCondition;
@property (copy, nonatomic) NSDictionary *discardableMessagesCondition;
@property (nonatomic) BOOL isAnchor;

- (BOOL)process:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
