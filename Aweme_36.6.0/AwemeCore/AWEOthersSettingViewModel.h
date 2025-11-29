@class NSString, NSDictionary, NSArray, AWEUserModel;

@interface AWEOthersSettingViewModel : AWESettingBaseViewModel <AWEOtherProfileSettingActionProtocol> {
    NSArray *_sectionDataArray;
}

@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) NSDictionary *trackerParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)hideHerPostDescriptionWithTaStr:(id)a0;
+ (Class)aAWERelationDOUYINHTSAdapterClass;

- (id)aAWERelationDOUYINHTSAdapter;
- (void)removeFans;
- (void)announceAccessibility:(id)a0 delay:(double)a1;
- (void)tapDeleteFansCell;
- (void)refreshBlockCell;
- (void)unBlockWithEnterFrom:(id)a0;
- (void)blockWithEnterFrom:(id)a0;
- (void)blockWithoutAlert:(id)a0;
- (BOOL)__hasHidedMyPost;
- (void)unhideMyPostFrom:(id)a0;
- (void)hideMyPostFrom:(id)a0;
- (void)tapHideHerPostCellFrom:(id)a0 enterMethod:(id)a1 needAlert:(BOOL)a2;
- (BOOL)__hasHidedHerPost;
- (void)unhideHerPostFrom:(id)a0;
- (void)hideHerPostFrom:(id)a0 enterMethod:(id)a1 needAlert:(BOOL)a2;
- (void)tapMessageButtonWithEnterFrom:(id)a0 schema:(id)a1;
- (id)getLiveRounterParamsWithEnterFrom:(id)a0;
- (void)new_trackEnterChatWithEnterFrom:(id)a0 convID:(id)a1;
- (void)tapShareNavButton:(id)a0;
- (void)removeFansConfirmAction;
- (id)configHideHerPostDescription;
- (void)tapEditUserAliasCellWithEnterFrom:(id)a0 enterMethod:(id)a1 previousPage:(id)a2;
- (void)tapReportCellWithEnterFrom:(id)a0;
- (void)tapBlockCellWithEnterFrom:(id)a0;
- (void)tapConfirmBlockCellFrom:(id)a0 isFromHot:(BOOL)a1 groupID:(id)a2 previousPage:(id)a3;
- (void)tapHideMyPostCellFrom:(id)a0;
- (void)tapHideHerPostCellFrom:(id)a0 enterMethod:(id)a1;
- (void)tapShareCell:(id)a0;
- (void)tapMessageCellWithEnterFrom:(id)a0 schema:(id)a1;
- (id)sectionDataArray;
- (void)setSectionDataArray:(id)a0;
- (BOOL)isBlocked;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
