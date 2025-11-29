@interface IESLiveMediaRoomNoticeMessageStrategy : IESLiveMessageNodeStrategy

- (struct CGSize { double x0; double x1; })innerViewSizeWithMaxLayoutWidth:(double)a0 node:(id)a1;
- (BOOL)doFilterForMessageList:(id)a0;
- (void)updateNodeOnCreated:(id)a0;
- (id)jointAttributedString:(id)a0;
- (void)updateNode:(id)a0 withMessage:(id)a1;
- (BOOL)needHandleAttributedStringForMessage:(id)a0;

@end
