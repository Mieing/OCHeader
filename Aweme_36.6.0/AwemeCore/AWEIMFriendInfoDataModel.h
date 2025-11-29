@class AWEIMUser, NSString, AWEIMActiveUserInfo, NSURL, AWEAwemeModel, AWEIMFriendSubInfoDataModel, AWEIMSkylightFriendWholeDotModel;

@interface AWEIMFriendInfoDataModel : NSObject <AWEIMFriendInfoDataModelProtocol>

@property (readonly, nonatomic) BOOL isLiveRoomScene;
@property (readonly, nonatomic) BOOL isFriendRoomScene;
@property (readonly, nonatomic) BOOL isGameRoomScene;
@property (readonly, nonatomic) BOOL isLiveLinkMicScene;
@property (readonly, nonatomic) NSString *liveRoomID;
@property (readonly, nonatomic) NSString *liveRoomAnchorID;
@property (readonly, nonatomic) NSString *liveRoomRequestID;
@property (readonly, nonatomic) NSString *friendRoomFunctionType;
@property (readonly, nonatomic) NSString *friendRoomDistributeSource;
@property (retain, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *conversationID;
@property (readonly, copy, nonatomic) NSString *preferredName;
@property (nonatomic) BOOL isGroupChat;
@property (nonatomic) BOOL isGroupChatAvailable;
@property (retain, nonatomic) AWEIMActiveUserInfo *info;
@property (readonly, nonatomic) BOOL isOnline;
@property (readonly, copy, nonatomic) NSString *secUid;
@property (readonly, copy, nonatomic) NSString *uid;
@property (retain, nonatomic) AWEAwemeModel *preloadItem;
@property (retain, nonatomic) AWEIMUser *user;
@property (copy, nonatomic) NSString *chatRoomID;
@property (readonly, nonatomic) BOOL isBirthday;
@property (retain, nonatomic) AWEIMFriendSubInfoDataModel *subInfoData;
@property (nonatomic) BOOL showInvisible;
@property (retain, nonatomic) AWEIMSkylightFriendWholeDotModel *wholeDotModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)getContentDict;
- (id)initWithIMUser:(id)a0;
- (id)initWithShareModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
