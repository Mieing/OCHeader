@interface IESLiveLikeMessageStrategy : IESLiveMessageNodeStrategy

@property (nonatomic) double lastMessageTime;

- (BOOL)doFilterForMessageList:(id)a0;
- (id)localNameColor;
- (void)jointAttributedString:(id)a0 withMessage:(id)a1;
- (id)localContentColor;
- (BOOL)needFoldForMessage:(id)a0;
- (BOOL)enableRoomDigg;
- (id)getTargetUserId:(id)a0;

@end
