@interface IESLiveAIAutoReplyMessageStrategy : IESLiveMessageNodeStrategy

- (struct CGSize { double x0; double x1; })innerViewSizeWithMaxLayoutWidth:(double)a0 node:(id)a1;
- (BOOL)doFilterForMessageList:(id)a0;
- (void)updateNodeOnCreated:(id)a0;
- (void)addNodeAction:(id)a0 withDisplayText:(id)a1 startLocation:(unsigned long long)a2;

@end
