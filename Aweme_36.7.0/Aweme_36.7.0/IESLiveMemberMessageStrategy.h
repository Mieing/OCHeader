@interface IESLiveMemberMessageStrategy : IESLiveMessageNodeStrategy

@property (nonatomic) double lastMessageTime;

- (BOOL)doFilterForMessageList:(id)a0;
- (void)updateNodeOnCreated:(id)a0;
- (id)localNameColor;
- (void)jointAttributedString:(id)a0 withMessage:(id)a1;
- (id)localContentColor;
- (BOOL)needFoldForMessage:(id)a0;
- (BOOL)isOwnersMessage:(id)a0;
- (id)contentString;

@end
