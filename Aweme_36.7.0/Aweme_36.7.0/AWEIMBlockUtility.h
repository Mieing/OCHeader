@class NSString;

@interface AWEIMBlockUtility : NSObject <IESIMActionSheetDelegate>

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *peerUserId;
@property (copy, nonatomic) NSString *peerSecUserID;
@property (copy, nonatomic) NSString *peerUserNickName;
@property (copy, nonatomic) NSString *conversationId;
@property (copy, nonatomic) NSString *reportEnterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)blockUser:(id)a0 isFriend:(BOOL)a1 completion:(id /* block */)a2 cancel:(id /* block */)a3;
+ (void)unblockUser:(id)a0 completion:(id /* block */)a1 cancel:(id /* block */)a2;
+ (void)blockUserWithoutAlertWithUid:(id)a0 completion:(id /* block */)a1;
+ (id)sharedInstance;

@end
