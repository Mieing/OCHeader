@interface IESLiveFansclubMessageStrategy : IESLiveMessageNodeStrategy

- (BOOL)doFilterForMessageList:(id)a0;
- (void)updateNodeOnCreated:(id)a0;
- (id)localNameColor;
- (void)jointAttributedString:(id)a0 withMessage:(id)a1;
- (id)localContentColor;
- (BOOL)enableFansClubMessageFold:(id)a0;
- (BOOL)enableFansClubMessageShowInList:(id)a0;
- (BOOL)isInteractionMsgEnableClickSceneWithNode:(id)a0;
- (BOOL)needFoldForMessage:(id)a0;
- (id)config;

@end
