@class NSString, NSArray, IESGCPPBGameImageBundler, IESGCPDetailSectionUnifiedGameInfoThemeConfig, IESGCPPBHeaderGameInfo, IESGCPPBGameImage, IESGCPPBVideoRankListEntrance, IESGCPPBGameDetailOfficialAccount;

@interface IESGCPDetailSectionUnifiedGameInfoV5ViewModel : IESGCPDetailBaseViewModel

@property (retain, nonatomic) IESGCPPBHeaderGameInfo *headerGameInfo;
@property (nonatomic) long long ratingEntranceThemeType;
@property (retain, nonatomic) IESGCPPBGameDetailOfficialAccount *officialAccount;
@property (retain, nonatomic) IESGCPDetailSectionUnifiedGameInfoThemeConfig *currentThemeConfig;
@property (copy, nonatomic) NSArray *additionDescriptionList;
@property (readonly, copy, nonatomic) NSString *gameID;
@property (readonly, copy, nonatomic) IESGCPPBGameImageBundler *gameIcon;
@property (readonly, copy, nonatomic) NSString *gameName;
@property (readonly, copy, nonatomic) IESGCPPBGameImage *gameStatusIcon;
@property (readonly, copy, nonatomic) IESGCPPBGameImage *gameStatusIconWhite;
@property (readonly, nonatomic) double gameStatusIconHeight;
@property (readonly, nonatomic) BOOL shouldShowOfficialAccount;
@property (readonly, copy, nonatomic) NSString *officialUserId;
@property (readonly, copy, nonatomic) NSString *officialSecUserId;
@property (readonly, copy, nonatomic) NSArray *tagsArray;
@property (readonly, copy, nonatomic) NSArray *oldDescriptionArray;
@property (readonly, nonatomic) IESGCPPBVideoRankListEntrance *videoRankListEntrance;
@property (readonly, nonatomic) BOOL shouldShowUserCommentEntrance;
@property (nonatomic) BOOL shouldShowEvaluatePoint;
@property (nonatomic) double evaluatePoint;
@property (nonatomic) unsigned long long evaluateCount;

- (id)descFont;
- (id)splitView;
- (void)didSetGameCPDIContext;
- (void)routeToTabWithTabID:(id)a0 params:(id)a1;
- (id)hasDisplayExtraParams;
- (id)evaluateInfo;
- (id)commonReportParams;
- (BOOL)shouldShowEvaluateCount;
- (id)getPCConfigString;
- (id)getComplianceStringWithTap:(id /* block */)a0;
- (id)parseDescriptionListFrom:(id)a0;
- (void)attachSplitText:(id)a0 text:(id)a1 tapAction:(id /* block */)a2;
- (void)schemaOpenUrl:(id)a0;
- (void)attachOfficialTagIfNeed:(id)a0 tapAction:(id /* block */)a1;
- (id)descriptionTagList;
- (void).cxx_destruct;
- (id)descriptionText;
- (void)setContent:(id)a0;

@end
