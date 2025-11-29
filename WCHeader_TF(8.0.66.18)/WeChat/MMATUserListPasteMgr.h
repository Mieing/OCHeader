@class NSString;

@interface MMATUserListPasteMgr : NSObject

@property (retain, nonatomic) NSString *atUserListKey;
@property (retain, nonatomic) NSString *atUserList;

+ (id)Instance;

- (void)applyCopyAtUserListWithChatUsername:(id)a0 copyText:(id)a1;
- (void)recordCopyWithChatUsername:(id)a0 AtUserList:(id)a1 copyText:(id)a2;
- (id)getCopyAtUserListKeyForCopyText:(id)a0 chatName:(id)a1;
- (void).cxx_destruct;

@end
