@class NSString;

@interface TIMXPBNUpdateGroupRequestBody : GPBMessage

@property (nonatomic) long long conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (copy, nonatomic) NSString *updateValue;
@property (nonatomic) BOOL hasUpdateValue;
@property (nonatomic) int groupFeatureId;
@property (nonatomic) BOOL hasGroupFeatureId;
@property (copy, nonatomic) NSString *groupFeatureValue;
@property (nonatomic) BOOL hasGroupFeatureValue;

+ (id)descriptor;

@end
