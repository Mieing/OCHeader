@class IESGCPPBGameDetailGameSimpleInfoV3, IESGCPPBGameDetailOfficialAccount, NSString, IESGCPDetailSectionGameInfoThemeConfig, IESGCPPBGameImageBundler, NSArray;

@interface IESGCPDetailSectionGameInfoViewModel : IESGCPDetailBaseViewModel <IESGCPDIContextSubscriber>

@property (retain, nonatomic) IESGCPPBGameDetailGameSimpleInfoV3 *simpleInfo;
@property (retain, nonatomic) IESGCPPBGameDetailOfficialAccount *officialAccount;
@property (retain, nonatomic) IESGCPDetailSectionGameInfoThemeConfig *fullScreenThemeConfig;
@property (retain, nonatomic) IESGCPDetailSectionGameInfoThemeConfig *halfScreenThemeConfig;
@property (retain, nonatomic) IESGCPDetailSectionGameInfoThemeConfig *currentThemeConfig;
@property (readonly, copy, nonatomic) NSString *gameID;
@property (readonly, copy, nonatomic) IESGCPPBGameImageBundler *gameIcon;
@property (readonly, copy, nonatomic) NSString *gameName;
@property (readonly, copy, nonatomic) NSString *descriptionText;
@property (readonly, nonatomic) BOOL shouldShowOfficialAccount;
@property (readonly, copy, nonatomic) NSString *officialUserId;
@property (readonly, copy, nonatomic) NSString *officialSecUserId;
@property (readonly, copy, nonatomic) NSArray *tagsArray;
@property (readonly, nonatomic) BOOL shouldShowUserCommentEntrance;
@property (nonatomic) BOOL shouldShowEvaluatePoint;
@property (nonatomic) double evaluatePoint;
@property (nonatomic) BOOL shouldShowEvaluateCount;
@property (nonatomic) unsigned long long evaluateCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openSchema:(id)a0;
- (void)didSetGameCPDIContext;
- (void)routeToTabWithTabID:(id)a0 params:(id)a1;
- (void)audienceDetailHalfToFullScreenThemeAnimationProgress:(double)a0;
- (id)hasDisplayExtraParams;
- (id)gradientThemeConfigWithProgress:(double)a0;
- (id)getTrackerEncodedString;
- (BOOL)noticeTextCouldDoJumpAction;
- (id)noticeArrowIconName;
- (void)userDidTapDescriptionText;
- (id)evaluateInfo;
- (id)descriptionJumpSchema;
- (id)getJumpContentFromNotice:(id)a0;
- (void).cxx_destruct;
- (void)setContent:(id)a0;
- (id)noticeText;

@end
