@class NSString;

@interface AWEIMSkylightFriendSnapshot : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long vmType;
@property (nonatomic) BOOL isGroupChat;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *conversationID;
@property (nonatomic) long long lastActiveTime;

- (id)transformToViewModel;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
