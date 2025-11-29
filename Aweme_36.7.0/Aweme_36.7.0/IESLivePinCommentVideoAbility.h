@class HTSLiveApi, NSString;
@protocol IESLiveRoomService, IESLivePinCommentAbilityDelegate;

@interface IESLivePinCommentVideoAbility : NSObject <IESLivePinCommentAbilityProtocol>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSLiveApi *api;
@property (nonatomic) BOOL videoPinAB;
@property (weak, nonatomic) id<IESLivePinCommentAbilityDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRoomModel:(id)a0 diContext:(id)a1;
- (void)updateNode:(id)a0 withHighlightItem:(id)a1;
- (id)createNodeWithMsgListNode:(id)a0;
- (BOOL)hasPinAuth;
- (void)pinCommentNode:(id)a0;
- (void)handleHighlightItem:(id)a0 withNode:(id)a1;
- (id)pinCommonFromHighlightItem:(id)a0;
- (void)unPinCommentNode:(id)a0;
- (double)preferHeightWithNode:(id)a0;
- (BOOL)isDuplicateNode:(id)a0 withOtherNode:(id)a1;
- (id)itemId:(id)a0;
- (void)injectTrackEventParams:(id)a0 withNode:(id)a1 forType:(long long)a2;
- (id)duplicateToastText;
- (BOOL)isValidHighlightItem:(id)a0;
- (void)didClickedActionSheetItemWithMsgListNode:(id)a0;
- (void)didClickedOnPinWithNode:(id)a0;
- (void)didDisplayedOnPinWithNode:(id)a0;
- (void)pinVideoCommentNode:(id)a0 actionType:(unsigned long long)a1 finish:(id /* block */)a2;
- (id)fetchVideoParamsWithNode:(id)a0;
- (void)trackVideoPinActionItemClickWith:(id)a0;
- (void)trackVideoPinClickPlayWith:(id)a0;
- (void)trackVideoPinShowWithNode:(id)a0;
- (void).cxx_destruct;

@end
