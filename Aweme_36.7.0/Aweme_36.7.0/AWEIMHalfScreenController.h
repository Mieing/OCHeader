@class AWEIMMessageConversation, NSArray, NSDictionary, NSString, NSMutableArray;
@protocol IESIMSearchEngineProtocol, AWEIMHalfScreenControllerDelegate, AWEIMGroupChatPanelControllerDelegate;

@interface AWEIMHalfScreenController : NSObject

@property (retain, nonatomic) NSArray *allUserContacts;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (copy, nonatomic) NSDictionary *paramDict;
@property (retain, nonatomic) NSArray *recentContacts;
@property (retain, nonatomic) NSArray *sectionTitles;
@property (retain, nonatomic) NSArray *sectionData;
@property (retain, nonatomic) NSArray *allContacts;
@property (retain, nonatomic) NSArray *searchList;
@property (weak, nonatomic) id<AWEIMHalfScreenControllerDelegate> delegate;
@property (retain, nonatomic) id<IESIMSearchEngineProtocol> searchEngine;
@property (retain, nonatomic) NSMutableArray *selectList;
@property (nonatomic) BOOL needHideMyself;
@property (retain, nonatomic) NSString *conversationId;
@property (retain, nonatomic) NSArray *currentParticipantsUids;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) long long defaultSelectCount;
@property (copy, nonatomic) NSArray *defaultSelectUserIDs;
@property (copy, nonatomic) NSArray *stickOnTopUidArray;
@property (nonatomic) BOOL shouldInsertContactRelationUidArray;
@property (nonatomic) BOOL needSelectAdditionalItem;
@property (weak, nonatomic) id<AWEIMGroupChatPanelControllerDelegate> groupChatPanelDelegate;
@property (copy, nonatomic) NSDictionary *groupChatTrackDict;

+ (void)handleErrorResponse:(id)a0 error:(id)a1 completion:(id /* block */)a2;
+ (void)handleErrorResponse:(id)a0 showToast:(BOOL)a1 error:(id)a2 completion:(id /* block */)a3;

- (void)searchWithKeyword:(id)a0;
- (void)fetchData:(BOOL)a0 completeBlock:(id /* block */)a1;
- (void)setupSearchEngine;
- (id)createChatWithCompletion:(id /* block */)a0 isSingleChat:(BOOL)a1 routerInfo:(id)a2 ext:(id)a3;
- (void)createChatWithCompletion:(id /* block */)a0 enterMethod:(id)a1 createSource:(id)a2 ext:(id)a3;
- (void)inviteIntoChat;
- (void)updateParamDict:(id)a0;
- (id)getShareModelAtIndexPath:(id)a0 isSearching:(BOOL)a1;
- (long long)getTrackerCellOrderAtIndexPath:(id)a0 isSearching:(BOOL)a1;
- (void)didSelectedItem:(id)a0;
- (void)prepareDataWithRecentContacts:(id)a0 allContacts:(id)a1 completeBlock:(id /* block */)a2;
- (void)__inviteNotFriendsInChat:(id)a0 completion:(id /* block */)a1;
- (void)p_getContactRelationUsersWithDispatchGroup:(id)a0 completion:(id /* block */)a1;
- (void)createChat:(BOOL)a0 shouldRouter:(BOOL)a1 ext:(id)a2;
- (void).cxx_destruct;

@end
