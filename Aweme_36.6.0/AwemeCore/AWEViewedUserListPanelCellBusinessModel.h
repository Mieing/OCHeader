@class NSString, AWEViewerListDataController, AWEAwemeModel, AWEUserModel;
@protocol AFDColorRingFacadeProtocol;

@interface AWEViewedUserListPanelCellBusinessModel : NSObject <AWEUserListGeneralCellBusinessModelProtocol>

@property (retain, nonatomic) id<AFDColorRingFacadeProtocol> colorRingFacade;
@property (copy, nonatomic) id /* block */ refreshBlock;
@property (retain, nonatomic) NSString *referString;
@property (retain, nonatomic) NSString *previousPage;
@property (retain, nonatomic) NSString *previousMethod;
@property (retain, nonatomic) NSString *accountType;
@property (nonatomic) long long sourceType;
@property (retain, nonatomic) NSString *pageIdentifier;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (retain, nonatomic) AWEViewerListDataController *dataController;

- (id)enterFrom;
- (BOOL)trackColorRingShow;
- (long long)prePageType;
- (long long)fromPageType;
- (void)didEndDisplayingCell;
- (void)onDidBindToCellWithRefreshBlock:(id /* block */)a0;
- (void)didBindToColorRingView:(id)a0;
- (BOOL)shouldShowDiggTipIcon;
- (BOOL)shouldShowRelationTag;
- (BOOL)shouldShowRelationButton;
- (BOOL)relationButtonIncludesDefaultLightInteractionState;
- (BOOL)relationButtonIncludesDefaultFollowUnfollowStates;
- (BOOL)shouldShowMoreActionButton;
- (BOOL)shouldShowDisclosureIndicator;
- (BOOL)shouldShowBottomLineView;
- (double)disclosureIndicatorIconSize;
- (id)lightActionSource;
- (id)customEnterChatMethod;
- (BOOL)enableAutoHeight;
- (id)customContentConfig;
- (id)bottomLineConfig;
- (double)customContentWidth;
- (BOOL)enableUpdateCellOptimize;
- (id)buildDiverseDiggModel;
- (BOOL)isStory25Style;
- (BOOL)canShowDiverseDiggList;
- (BOOL)canShowDiverseDiggTitleLabelWith:(id)a0;
- (void).cxx_destruct;
- (id)customContentView;
- (id)subTitle;

@end
