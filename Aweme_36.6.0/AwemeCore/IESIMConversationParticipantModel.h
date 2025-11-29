@class NSString;

@interface IESIMConversationParticipantModel : NSObject

@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUserID;
@property (nonatomic) long long role;
@property (copy, nonatomic) NSString *alias;
@property (nonatomic) long long silentStatus;
@property (nonatomic) long long silentTime;
@property (nonatomic) long long silentDeadlineTime;

+ (id)convertFromTIMOConversationParticipant:(id)a0;

- (void)iesim_setAlias:(id)a0;
- (void).cxx_destruct;

@end
