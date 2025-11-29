@class NSString, NSArray;

@interface AWEIMCreateGroupConfiguration : NSObject

@property (copy, nonatomic) NSString *groupCreateType;
@property (copy, nonatomic) NSString *createSource;
@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSString *groupIcon;
@property (copy, nonatomic) NSString *groupDesc;
@property (retain, nonatomic) NSArray *uidList;
@property (copy, nonatomic) NSString *idempotentIdentifier;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) BOOL isInviteWeixinFriends;

- (void).cxx_destruct;

@end
