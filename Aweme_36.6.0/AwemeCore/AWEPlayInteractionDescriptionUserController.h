@class AWEPlayInteractionDescriptionContext, NSString, NSMutableDictionary, NSNumber;

@interface AWEPlayInteractionDescriptionUserController : NSObject <AWEPlayInteractionDescriptionParserProtocol, AWEPlayInteractionDescriptionLifeCycleProtocol>

@property (retain, nonatomic) NSNumber *simplyLiveRoomId;
@property (retain, nonatomic) NSString *simplyLiveUserId;
@property (retain, nonatomic) NSMutableDictionary *liveStatusDict;
@property (retain, nonatomic) AWEPlayInteractionDescriptionContext *descContext;
@property (nonatomic) BOOL alreadyCheckLiveStatus;
@property (nonatomic) BOOL hasAppearOnce;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)liveIcon;
- (id)parserTextExtraForDescriptionWithContext:(id)a0;
- (void)viewController_viewDidAppearWithContext:(id)a0;
- (void)viewController_willDisplayWithContext:(id)a0;
- (void)viewController_didEndDisplayingWithContext:(id)a0;
- (BOOL)isSafeSubstringRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 forStringLength:(unsigned long long)a1;
- (void)recordFalseTouchWithContext:(id)a0;
- (BOOL)liveAtUserEnableNewStyle;
- (void)checkAtUserLiveStatus;
- (void)trackLiveShowIfNeedWhenDisplay;
- (void)parserSimplyLiveRoomUserWithContext:(id)a0 descriptionExtraModel:(id)a1;
- (void)parserLiveRoomUserWithContext:(id)a0 descriptionExtraModel:(id)a1 desExtraModels:(id)a2;
- (void)parserElseUserWithContext:(id)a0 descriptionExtraModel:(id)a1;
- (void)parserVideoCommentUserWithContext:(id)a0 videoCommentExtraModel:(id)a1;
- (void)parserVideoReplyUserWithContext:(id)a0 videoCommentExtraModel:(id)a1;
- (void)parserVideoDuetChainForVideoWithContext:(id)a0 duetChainExtraModel:(id)a1;
- (void)parserSimplyLivePathRoomUserWithContext:(id)a0 simplyLivePathExtraModel:(id)a1;
- (void)enterLiveRoomWithRoomID:(id)a0 userID:(id)a1 parserContext:(id)a2;
- (void)trackLiveVideoAtUserShow:(id)a0 roomID:(id)a1 userID:(id)a2;
- (void)checkLiveStatusWithResponse:(id)a0 targetUids:(id)a1;
- (BOOL)checkLiveStatusWith:(id)a0 feed:(id)a1;
- (void)simplyLiveRoomPathActionWithRoomID:(id)a0 userID:(id)a1 parserContext:(id)a2;
- (void)trackSimplyLivePathShowWithContext:(id)a0;
- (void)addLivePathTagAttachmentWithContext:(id)a0 simplyLivePathExtraModel:(id)a1;
- (void)parserVideoCommentForVideoWithContext:(id)a0 videoCommentExtraModel:(id)a1;
- (void)videoReplyClickedWithContext:(id)a0;
- (id)tagAttachmentWithAttributedStringForVideoReplyWithContext:(id)a0 videoCommentExtraModel:(id)a1 isReplyComment:(BOOL)a2;
- (void)videoCommentClickedWithContext:(id)a0;
- (id)duetChainTagAttachment:(id)a0 duetChainExtraModel:(id)a1;
- (void)duetChainButtonClickedWithContext:(id)a0 duetAwemeId:(id)a1;
- (void).cxx_destruct;
- (void)reset;

@end
