@class NSString;

@interface AFDFriendRecommendTagManager : NSObject <AFDFriendRecommendTagManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cacheService;
+ (BOOL)shouldShowFriendRecommendTagWithModel:(id)a0 context:(id)a1;
+ (id)recommendTagView;
+ (void)preprocessFriendRecommendTagWithModel:(id)a0 context:(id)a1;
+ (id)recommendTagViewModelWithAwemeModel:(id)a0 context:(id)a1 containerWidth:(double)a2;
+ (void)didShowFriendRecommendTagWithModel:(id)a0 awemeModel:(id)a1 context:(id)a2;
+ (BOOL)shouldBlockRecommendLabelShowWithModel:(id)a0;
+ (void)didClickRightBtnWithModel:(id)a0 awemeModel:(id)a1 context:(id)a2;
+ (void)didShowBubbleView;
+ (void)friendRecommendTagWillAppearWithModel:(id)a0 context:(id)a1;
+ (BOOL)canShowRecommendToFriendsGuideRightButtonWithAwemeModel:(id)a0 context:(id)a1;
+ (BOOL)shouldModifyGuideBtnIcon;
+ (void)didShowGuideButtonWithModel:(id)a0;
+ (unsigned long long)recommendTagTypeWithModel:(id)a0 context:(id)a1;
+ (Class)strategyWithModel:(id)a0 context:(id)a1;
+ (void)didTapRecommendToFriendsGuideWithModel:(id)a0 pageContext:(id)a1;
+ (BOOL)canShowRecommendToFriendsGuideWithAwemeModel:(id)a0 referString:(id)a1;
+ (id)guideButtonConfig;


@end
