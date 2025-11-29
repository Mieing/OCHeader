@interface IESLiveSocialMessageStrategy : IESLiveMessageNodeStrategy

- (BOOL)doFilterForMessageList:(id)a0;
- (void)updateNodeOnCreated:(id)a0;
- (id)localNameColor;
- (void)jointAttributedString:(id)a0 withMessage:(id)a1;
- (id)localContentColor;
- (BOOL)needFoldForMessage:(id)a0;
- (void)addNodeActionWithServerNode:(id)a0;
- (BOOL)enableFollowMessageFold:(id)a0;
- (BOOL)enableShareMessageFold:(id)a0;
- (BOOL)enableFollowMessageShowInList:(id)a0;
- (BOOL)enableShareMessageShowInList:(id)a0;
- (BOOL)enableMessageFoldForAnchorColdOpt:(id)a0;
- (id)config;
- (id)contentString;

@end
