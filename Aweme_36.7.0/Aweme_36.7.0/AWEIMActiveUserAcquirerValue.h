@class NSString, NSMutableDictionary, AWEIMActiveUserInfo;

@interface AWEIMActiveUserAcquirerValue : NSObject

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *uid;
@property (retain, nonatomic) NSMutableDictionary *completionDictionary;
@property (retain, nonatomic) AWEIMActiveUserInfo *activeUserInfo;
@property (retain, nonatomic) AWEIMActiveUserInfo *nonFriendActiveUserInfo;

- (void).cxx_destruct;
- (id)init;

@end
