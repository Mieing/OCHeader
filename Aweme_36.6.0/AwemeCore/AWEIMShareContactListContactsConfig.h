@protocol AWEIMShareModelProtocol;

@interface AWEIMShareContactListContactsConfig : NSObject

@property (nonatomic) BOOL enableMergeRecentShare;
@property (nonatomic) BOOL enableAddWechatFriend;
@property (nonatomic) BOOL enableGroupChat;
@property (nonatomic) BOOL enableMessageTabSort;
@property (nonatomic) BOOL enableMoreFriend;
@property (nonatomic) BOOL enableRecentShareFlow;
@property (retain, nonatomic) id<AWEIMShareModelProtocol> insertShareModelToTop;

- (void).cxx_destruct;
- (id)init;

@end
