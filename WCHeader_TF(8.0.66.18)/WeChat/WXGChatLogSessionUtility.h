@class NSMutableArray, NSMutableDictionary;

@interface WXGChatLogSessionUtility : NSObject

@property (retain, nonatomic) NSMutableArray *allUserNames;
@property (retain, nonatomic) NSMutableArray *singleChatSessions;
@property (retain, nonatomic) NSMutableArray *chatRoomSessions;
@property (retain, nonatomic) NSMutableArray *starSessions;
@property (retain, nonatomic) NSMutableArray *chatOnlySessions;
@property (retain, nonatomic) NSMutableArray *foldChatRoomSessions;
@property (retain, nonatomic) NSMutableArray *topSessions;
@property (retain, nonatomic) NSMutableDictionary *includeUsersMap;

+ (id)getUserName;
+ (id)loadAllUserName;
+ (BOOL)p_isLocalizedContactThatCannotSync:(id)a0;

- (void)loadAllTypeSessionWithIncludeUsers:(id)a0;
- (void)loadAllTypeSessionOnMainThread;
- (id)getChatOnlySessions;
- (id)getAllSessions;
- (id)getStarSessions;
- (id)getSingleChatSessions;
- (id)getChatRoomSessions;
- (id)getFoldChatRoomSessions;
- (id)getTopSessions;
- (id)getUserIncludeMap;
- (void).cxx_destruct;

@end
