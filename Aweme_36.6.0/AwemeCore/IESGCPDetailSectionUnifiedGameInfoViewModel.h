@class IESGCPDetailSectionUnifiedGameInfoThemeConfig, IESGCPPBGameDetailGameSimpleInfoV3, IESGCPPBGameDetailOfficialAccount, NSString, IESGCPPBGameImageBundler, IESGCPPBGameImage, NSArray;

@interface IESGCPDetailSectionUnifiedGameInfoViewModel : IESGCPDetailBaseViewModel <IESGCPDIContextSubscriber, IESGCPAudienceDetailScrollActions>

@property (retain, nonatomic) IESGCPPBGameDetailGameSimpleInfoV3 *simpleInfo;
@property (nonatomic) long long ratingEntranceThemeType;
@property (retain, nonatomic) IESGCPPBGameDetailOfficialAccount *officialAccount;
@property (retain, nonatomic) IESGCPDetailSectionUnifiedGameInfoThemeConfig *fullScreenThemeConfig;
@property (retain, nonatomic) IESGCPDetailSectionUnifiedGameInfoThemeConfig *halfScreenThemeConfig;
@property (retain, nonatomic) IESGCPDetailSectionUnifiedGameInfoThemeConfig *currentThemeConfig;
@property (readonly, copy, nonatomic) NSString *gameID;
@property (readonly, copy, nonatomic) IESGCPPBGameImageBundler *gameIcon;
@property (readonly, copy, nonatomic) NSString *gameName;
@property (readonly, copy, nonatomic) IESGCPPBGameImage *gameStatusIcon;
@property (readonly, copy, nonatomic) IESGCPPBGameImage *gameStatusIconWhite;
@property (readonly, nonatomic) double gameStatusIconHeight;
@property (readonly, copy, nonatomic) NSString *descriptionText;
@property (readonly, copy, nonatomic) NSArray *descriptionArray;
@property (readonly, nonatomic) BOOL shouldShowOfficialAccount;
@property (readonly, copy, nonatomic) NSString *officialUserId;
@property (readonly, copy, nonatomic) NSString *officialSecUserId;
@property (readonly, copy, nonatomic) NSArray *tagsArray;
@property (readonly, nonatomic) BOOL shouldShowUserCommentEntrance;
@property (nonatomic) BOOL shouldShowEvaluatePoint;
@property (nonatomic) double evaluatePoint;
@property (nonatomic) unsigned long long evaluateCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetGameCPDIContext;
- (void)routeToTabWithTabID:(id)a0 params:(id)a1;
- (void)audienceDetailHalfToFullScreenThemeAnimationProgress:(double)a0;
- (id)hasDisplayExtraParams;
- (id)gradientThemeConfigWithProgress:(double)a0;
- (id)evaluateInfo;
- (BOOL)shouldShowEvaluateCount;
- (id)gameInfoThemeConfigFrom:(BOOL)a0 ratingThemeType:(long long)a1;
- (void).cxx_destruct;
- (void)setContent:(id)a0;

@end
