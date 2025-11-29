@class IESGCPPBGameDetailReserveGameSimpleInfoV3, NSArray, IESGCPPBGameDetailOfficialAccount, IESGCPDetailSectionReserveGameInfoThemeConfig, IESGCPPBGameImageBundler, NSString;

@interface IESGCPDetailSectionReserveGameInfoViewModel : IESGCPDetailBaseViewModel <IESGCPDIContextSubscriber>

@property (retain, nonatomic) IESGCPPBGameDetailReserveGameSimpleInfoV3 *info;
@property (retain, nonatomic) IESGCPPBGameDetailOfficialAccount *officialAccount;
@property (retain, nonatomic) NSArray *noticeListArray;
@property (retain, nonatomic) IESGCPDetailSectionReserveGameInfoThemeConfig *currentThemeConfig;
@property (retain, nonatomic) IESGCPDetailSectionReserveGameInfoThemeConfig *halfScreenThemeConfig;
@property (retain, nonatomic) IESGCPDetailSectionReserveGameInfoThemeConfig *fullScreenThemeConfig;
@property (readonly, nonatomic) IESGCPPBGameImageBundler *gameIcon;
@property (readonly, copy, nonatomic) NSString *gameID;
@property (readonly, copy, nonatomic) NSString *gameName;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *descriptionText;
@property (readonly, nonatomic) BOOL showDescriptionArrow;
@property (readonly, copy, nonatomic) NSString *descriptionAdditionText;
@property (readonly, nonatomic) BOOL showDescriptionAdditionArrow;
@property (readonly, nonatomic) BOOL shouldShowOfficialAccount;
@property (readonly, copy, nonatomic) NSString *officialUserId;
@property (readonly, copy, nonatomic) NSString *officialSecUserId;
@property (readonly, copy, nonatomic) NSArray *tagsArray;
@property (copy, nonatomic) id /* block */ themeConfigDidChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openSchema:(id)a0;
- (void)didSetGameCPDIContext;
- (void)audienceDetailHalfToFullScreenThemeAnimationProgress:(double)a0;
- (id)gradientThemeConfigWithProgress:(double)a0;
- (id)getTrackerEncodedString;
- (id)noticeArrowIconName;
- (void)userDidTapDescriptionText;
- (id)getJumpContentFromNotice:(id)a0;
- (void)userDidTapDescriptionAdditionText;
- (id)getDefaultReserveGameInfoThemeConfig;
- (id)reserveGameInfoThemeConfigFrom:(BOOL)a0;
- (BOOL)descriptionNoticeTextCouldDoJumpAction;
- (id)descriptionNoticeModel;
- (id)appendCustomQueryParamAt:(id)a0;
- (BOOL)descriptionAdditionNoticeTextCouldDoJumpAction;
- (id)descriptionAdditionNoticeModel;
- (void).cxx_destruct;
- (void)setContent:(id)a0;

@end
