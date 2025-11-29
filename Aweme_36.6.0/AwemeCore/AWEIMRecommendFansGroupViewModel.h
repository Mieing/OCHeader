@class NSString, NSDictionary, NSArray, AWEIMRecommendFansGroupListModel;

@interface AWEIMRecommendFansGroupViewModel : NSObject

@property (copy, nonatomic) NSDictionary *joinGroupFailedCardDict;
@property (copy, nonatomic) NSString *toastContent;
@property (copy, nonatomic) NSString *cidForOpenMessageVC;
@property (copy, nonatomic) NSDictionary *trackJoinGroupDataInfo;
@property (copy, nonatomic) NSArray *groupViewModelList;
@property (retain, nonatomic) AWEIMRecommendFansGroupListModel *model;
@property (nonatomic) BOOL onLoading;
@property (nonatomic) BOOL isReloading;
@property (nonatomic) BOOL isFirstRequest;
@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSArray *recommendGroupIds;
@property (copy, nonatomic) NSString *previousPage;

- (void)resetModelShownFlag;
- (void)joinGroupWithViewModel:(id)a0;
- (void)clearGroupModelList;
- (void)joinGroupWithViewModel:(id)a0 invitationExtra:(id)a1 bizExtra:(id)a2 completion:(id /* block */)a3;
- (BOOL)__canJumpMessagePageForJoinStatus:(long long)a0;
- (void)__trackJoinGroupDataWithViewModel:(id)a0 responseStatus:(long long)a1;
- (void).cxx_destruct;
- (void)fetchData;
- (id)initWithScene:(unsigned long long)a0;

@end
