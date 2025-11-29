@class NSString, FeedItem, HTSLiveUser;

@interface IESLiveFeedDrawRoomItemModel : HTSLiveFeedRoomItem <HTSLiveFeedItem, IESLiveFeedDrawerItemProtocol>

@property (nonatomic) unsigned long long coverStyle;
@property (nonatomic) BOOL isRecommendRoom;
@property (retain, nonatomic) NSString *drawerPage;
@property (readonly, nonatomic) BOOL isVSRoom;
@property (readonly, nonatomic) BOOL isVSFirstPlay;
@property (nonatomic) BOOL needShowDistance;
@property (nonatomic) BOOL isFromCity;
@property (nonatomic) BOOL isPreviewing;
@property (copy, nonatomic) NSString *drawerEnterMethod;
@property (retain, nonatomic) HTSLiveUser *customUserInfo;
@property (nonatomic) long long liveStatus;
@property (retain, nonatomic) FeedItem *model;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (BOOL)enableShowChallenge;
- (void)p_updateWatchCountAndHidden;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (Class)cellClass;
- (Class)sectionClass;

@end
