@class NSString;

@interface OldAccountContact : NSObject <PBCoding>

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *ticket;
@property (nonatomic) unsigned int sequence;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *encryptedUsername;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) NSString *friendRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_ticket;
+ (void)PBArrayAdd_sequence;
+ (void)PBArrayAdd_nickname;
+ (void)PBArrayAdd_encryptedUsername;
+ (void)PBArrayAdd_status;
+ (void)PBArrayAdd_friendRequest;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithOldAcctFriend:(id)a0;
- (id)availableUsername;
- (void)mergeOldAccountContact:(id)a0;
- (long long)compareOldAccountFriendAscending:(id)a0;
- (void).cxx_destruct;

@end
