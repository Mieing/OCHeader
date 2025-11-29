@class NSString;

@interface IESLiveMessageInteractionGlobalModule : IESLiveModule <IESLiveMessageInteractionGlobalModule>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)imEntranceService;
- (Class)commentEmoticonEmojiPageCellClz;
- (BOOL)setCommentEmoticonTracker:(id)a0 delegate:(id)a1 cell:(id)a2;

@end
