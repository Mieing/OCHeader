@class NSString;

@interface AWEIMSocialGroupInfo : NSObject

@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSString *groupAvatar;
@property (copy, nonatomic) NSString *groupName;
@property (nonatomic) long long groupMemberCount;

- (void).cxx_destruct;

@end
