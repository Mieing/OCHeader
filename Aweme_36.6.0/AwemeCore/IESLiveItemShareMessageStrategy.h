@interface IESLiveItemShareMessageStrategy : IESLiveMessageNodeStrategy

- (id)attachingDIContext;
- (id)getDisplayText;
- (struct CGSize { double x0; double x1; })innerViewSizeWithMaxLayoutWidth:(double)a0 node:(id)a1;
- (BOOL)doFilterForMessageList:(id)a0;
- (void)updateNodeOnCreated:(id)a0;
- (id)needLoadOtherImageURLsForMessage:(id)a0;

@end
