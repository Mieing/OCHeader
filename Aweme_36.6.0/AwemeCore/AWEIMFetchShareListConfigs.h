@class NSString, NSArray, AWEAwemeModel, AWEShareContext;
@protocol AWEIMShareModelProtocol;

@interface AWEIMFetchShareListConfigs : NSObject

@property (nonatomic) BOOL filterGroupChat;
@property (nonatomic) BOOL insertStickOnTopChats;
@property (nonatomic) BOOL filterNotFriendUser;
@property (nonatomic) BOOL filterNotFriendUserForSingleChat;
@property (nonatomic) BOOL shieldFansGroup;
@property (nonatomic) BOOL isVerticalPanel;
@property (nonatomic) BOOL needAddressBookFriend;
@property (nonatomic) long long maxCount;
@property (nonatomic) long long limitCount;
@property (nonatomic) BOOL shouldShareFlow;
@property (copy, nonatomic) NSString *shareThirdRecommendMap;
@property (copy, nonatomic) NSArray *insertList;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (copy, nonatomic) NSString *sharePanelStrategyScene;
@property (nonatomic) unsigned long long panelDataMode;
@property (retain, nonatomic) id<AWEIMShareModelProtocol> insertShareModelToTop;
@property (copy, nonatomic) id /* block */ customFilter;
@property (retain, nonatomic) AWEShareContext *shareContext;

- (void).cxx_destruct;

@end
