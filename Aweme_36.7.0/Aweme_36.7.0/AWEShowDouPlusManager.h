@class NSString, AWEDouPlusToastInfoResponseModel, AWEAwemeModel;
@protocol AWEShowDouPlusManagerDelegate;

@interface AWEShowDouPlusManager : NSObject <AWEShowDouPlusManagerProtocol>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *referString;
@property (weak, nonatomic) id<AWEShowDouPlusManagerDelegate> delegate;
@property (retain, nonatomic) AWEDouPlusToastInfoResponseModel *douplusInfoModel;
@property (copy, nonatomic) id /* block */ shareActionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchDouPlusGuideInfoInFeedScene;
- (void)showDouPlusIconReverseInFeedSceneTargetView:(id)a0;
- (void)showDouPlusGuideBubbleAlignWithTargetView:(id)a0 inContainerView:(id)a1 inDirection:(unsigned long long)a2;
- (void)showDouPlusGuideBubbleInInteractionSceneWithTargetView:(id)a0 inContainerView:(id)a1 inDirection:(unsigned long long)a2;
- (void)showDouPlusGuideBubbleInInteractionSceneAfterCommentPanelDismissWithTargetView:(id)a0 inContainerView:(id)a1;
- (void)showDouPlusGuideBubbleAfterPublishWithTargetView:(id)a0 referString:(id)a1 inContainerView:(id)a2 inDirection:(unsigned long long)a3 shareCompletionBlock:(id /* block */)a4;
- (void)douplusWillReverseIconFromUserProfile:(BOOL)a0;
- (BOOL)canShowDouPlusGuide;
- (void)showDouPlusToastBubbleIfNeededAlignWithTargetView:(id)a0 inContainerView:(id)a1 inDirection:(unsigned long long)a2;
- (id)trackIconAnimSuffixWithType:(long long)a0;
- (void)handleDouPlusToastShowWithBubble:(id)a0;
- (void)handleDouPlusToastTrackShowEventWithExtraParams:(id)a0 isCurrentUser:(BOOL)a1;
- (void)prefechNewDouPlusIconInfoWith:(id)a0;
- (id)trackBubbleSuffixWithType:(long long)a0;
- (void)prefetchNewDouPlusIconInfoInInteractionSceneIfNeeded;
- (void)prefetchNewDouPlusIconInfoInHomepageSceneIfNeeded;
- (void)p_clickDouPlusBubbleAction;
- (void).cxx_destruct;

@end
