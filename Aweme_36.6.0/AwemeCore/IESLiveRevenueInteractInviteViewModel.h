@class NSString, NSArray, IESLiveFixedFontTextSizeCache, RivalsRecommendResponse_AutoMatchInfo, NSDictionary, RivalsRecommendResponse_SearchBar, NSMutableArray, IESLiveRevenueInteractApi;
@protocol IESLiveInteractiveExtendUserService;

@interface IESLiveRevenueInteractInviteViewModel : NSObject <IESLiveInteractiveUserServiceDelegate>

@property (retain, nonatomic) IESLiveRevenueInteractApi *revenueInteractApi;
@property (weak, nonatomic) id<IESLiveInteractiveExtendUserService> userService;
@property (retain, nonatomic) RivalsRecommendResponse_SearchBar *searchBarInfoModel;
@property (nonatomic) BOOL enableMultiAutoMatch;
@property (retain, nonatomic) RivalsRecommendResponse_AutoMatchInfo *autoMatchInfo;
@property (copy, nonatomic) NSArray *sectionList;
@property (copy, nonatomic) NSDictionary *itemMap;
@property (retain, nonatomic) NSMutableArray *invitedUserByMyself;
@property (nonatomic) unsigned long long entranceSource;
@property (retain, nonatomic) IESLiveFixedFontTextSizeCache *nameSizeCache;
@property (retain, nonatomic) IESLiveFixedFontTextSizeCache *userTagSizeCache;
@property (copy, nonatomic) NSString *imprId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackWithEvent:(id)a0 extraParams:(id)a1;
- (void)showSearchPanel;
- (BOOL)isInvitingOthers;
- (BOOL)isPKing;
- (void)multiLinkerUserService:(id)a0 didInteractiveListUpdated:(id)a1;
- (id)initWithUserService:(id)a0 diContext:(id)a1;
- (BOOL)isBreakthroughing;
- (BOOL)isVoting;
- (BOOL)isShellPKing;
- (id)getShellPKName;
- (void)fetchRecommendRivalsWithConnectingSource:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)initInvitedUsersByMyself;
- (void)monitorWithResponse:(id)a0 error:(id)a1 apiRequestTime:(double)a2 path:(id)a3;
- (void)buildInviteList:(id)a0;
- (void)logInfoWithEvent:(id)a0 extra:(id)a1 pkCategory:(unsigned long long)a2;
- (void)inviteWithRoom:(id)a0 signExtra:(id)a1 isMultiInvite:(BOOL)a2 inviteType:(unsigned long long)a3 inviteSource:(unsigned long long)a4 isRecommend:(BOOL)a5 listNum:(long long)a6 isNeedImprId:(BOOL)a7 completion:(id /* block */)a8;
- (void)cancelInviteWithRoom:(id)a0 inviteType:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)trackWithEvent:(id)a0 extraParams:(id)a1 isNeedImprId:(BOOL)a2;
- (void)setupItemButtonState:(long long)a0 userID:(id)a1;
- (id)setupInviteItem:(id)a0 requestID:(id)a1 isRecommend:(BOOL)a2 listNum:(long long)a3;
- (BOOL)isMultiInviteeLimited;
- (BOOL)isInviteeLimited;
- (void)multiInviteWithItem:(id)a0;
- (void)inviteWithRoom:(id)a0 signExtra:(id)a1 isMultiInvite:(BOOL)a2 inviteType:(unsigned long long)a3 inviteSource:(unsigned long long)a4 isRecommend:(BOOL)a5 listNum:(long long)a6 completion:(id /* block */)a7;
- (void)inviteWithRoom:(id)a0 signExtra:(id)a1 inviteType:(unsigned long long)a2 source:(int)a3 inviteSource:(unsigned long long)a4 extraParams:(id)a5 completion:(id /* block */)a6;
- (void).cxx_destruct;

@end
