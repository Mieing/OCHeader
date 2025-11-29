@class NSSet, NSArray, NSString, NSDictionary;

@interface TIMXConversationCreateContext : NSObject

@property (copy, nonatomic) NSSet *otherParticipants;
@property (copy, nonatomic) NSArray *participantsBizRoleObjects;
@property (nonatomic) int type;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) int inbox;
@property (copy, nonatomic) NSString *idempotentID;
@property (copy, nonatomic) NSDictionary *bizExt;
@property (copy, nonatomic) NSSet *participants;
@property (nonatomic) BOOL persistent;
@property (nonatomic) BOOL useMemberVersion;

- (void).cxx_destruct;

@end
