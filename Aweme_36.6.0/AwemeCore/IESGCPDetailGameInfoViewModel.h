@class NSString, IESGCPPBGameImageBundler, IESGCPPBGameDetailGameSimpleInfoV2, NSArray, IESGCPDetailGameInfoThemeConfig;

@interface IESGCPDetailGameInfoViewModel : IESGCPDetailBaseViewModel

@property (retain, nonatomic) IESGCPPBGameDetailGameSimpleInfoV2 *simpleInfo;
@property (retain, nonatomic) IESGCPDetailGameInfoThemeConfig *themeConfig;
@property (readonly, copy, nonatomic) NSString *gameID;
@property (readonly, copy, nonatomic) IESGCPPBGameImageBundler *gameIcon;
@property (readonly, copy, nonatomic) NSString *gameName;
@property (readonly, copy, nonatomic) NSString *descriptionText;
@property (readonly, copy, nonatomic) NSArray *tagsArray;
@property (readonly, nonatomic) BOOL shouldShowUserCommentEntrance;
@property (nonatomic) BOOL shouldShowEvaluatePoint;
@property (nonatomic) double evaluatePoint;
@property (nonatomic) unsigned long long evaluateCount;

- (void)openSchema:(id)a0;
- (void)routeToTabWithTabID:(id)a0 params:(id)a1;
- (id)hasDisplayExtraParams;
- (id)getTrackerEncodedString;
- (BOOL)noticeTextCouldDoJumpAction;
- (id)noticeArrowIconName;
- (void)userDidTapDescriptionText;
- (id)evaluateInfo;
- (id)descriptionJumpSchema;
- (void).cxx_destruct;
- (void)setContent:(id)a0;
- (id)noticeText;

@end
