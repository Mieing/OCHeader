@class NSString, NSArray, AWEUserModel, NSMutableDictionary, AWEProfileMenuVerticalSectionViewModel, AWEProfileMenuHorizontalSectionViewModel, NSObject, AWEProfileMoreMenuContext;
@protocol AWEOtherProfileSettingActionProtocol;

@interface AWEProfileMoreMenuViewModel : AWEBaseListViewModel <AWEUserMessage>

@property (retain, nonatomic) AWEProfileMenuHorizontalSectionViewModel *horizontalSectionViewModel;
@property (retain, nonatomic) AWEProfileMenuVerticalSectionViewModel *verticalSectionViewModel;
@property (retain, nonatomic) NSArray *cardModels;
@property (retain, nonatomic) NSArray *barSectionsModels;
@property (retain, nonatomic) AWEProfileMoreMenuContext *context;
@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) NSObject<AWEOtherProfileSettingActionProtocol> *profileMenuActions;
@property (retain, nonatomic) NSMutableDictionary *orderDict;
@property (nonatomic) BOOL isSolid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEUserProfileMutiTargetConfigCommonAdapterClass;
+ (id)getEnterFrom:(unsigned long long)a0 trackParams:(id)a1;

- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didSpecialFollowWithUser:(id)a0 error:(id)a1;
- (void)setupViewModel;
- (void)configWithContext:(id)a0;
- (void)trackShareClick;
- (id)blockModel;
- (id)notShowModel;
- (id)followModel;
- (void)unfollow:(BOOL)a0;
- (id)aAWEUserProfileMutiTargetConfigCommonAdapter;
- (long long)cardModelsCount;
- (long long)barModelsTotalCount;
- (long long)twoLineBarModelsTotalCount;
- (long long)barSectionsCount;
- (id)__setmodels;
- (BOOL)p_needSeparateSections;
- (id)itemTypeSections;
- (BOOL)p_isRelationPanel;
- (BOOL)p_isMorePanel;
- (id)imChatModel;
- (id)reportModel;
- (id)setAliasMode;
- (id)pigeonModel;
- (id)taIsFriendModel;
- (id)topUserModel;
- (id)specialFollowModel;
- (id)bellPushModel;
- (id)setGroupModel;
- (id)taIsCloseFriendModel;
- (id)hideMyPostModel;
- (id)hideHerPostModel;
- (id)notShow24StoryModel;
- (id)notSee24StoryModel;
- (id)notSeeModel;
- (id)removeFansModel;
- (id)goodsServiceModel;
- (id)poiGoodsServiceModel;
- (id)unFollowModel;
- (id)unFollowSecondModel;
- (id)approveMateModel;
- (id)appliedMateModel;
- (id)addMateModel;
- (id)removeMateModel;
- (void)addHangoutAndKnowledgeModelIfNeeded:(id)a0 orderDict:(id)a1;
- (void)p_filterForbiddenModels;
- (void)unfollowWithUser:(id)a0 trackerParam:(id)a1;
- (id)p_relationSheetContext;
- (void)p_trackAddFriendBtn:(id)a0 toStatus:(id)a1;
- (BOOL)supportEditNameInHeader;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)shareModel;

@end
