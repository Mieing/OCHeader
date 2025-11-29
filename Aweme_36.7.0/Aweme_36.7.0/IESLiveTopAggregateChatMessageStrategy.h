@interface IESLiveTopAggregateChatMessageStrategy : IESLiveMessageNodeStrategy

- (BOOL)doFilterForMessageList:(id)a0;
- (void)updateNodeOnCreated:(id)a0;
- (id)localNameColor;
- (void)jointAttributedString:(id)a0 withMessage:(id)a1;
- (id)localContentColor;
- (void)addNodeActionWithLocalNode:(id)a0;
- (id)config;

@end
