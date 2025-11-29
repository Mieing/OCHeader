@class NSString, NSDictionary;

@interface TIMXMessageModifyRequestModel : NSObject

@property (nonatomic) long long conversationShortID;
@property (nonatomic) long long serverMessageID;
@property (copy, nonatomic) NSString *ticket;
@property (copy, nonatomic) NSDictionary *ext;
@property (nonatomic) BOOL isEdited;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) unsigned long long conversationType;
@property (nonatomic) long long messageType;
@property (copy, nonatomic) NSString *messageID;
@property (copy, nonatomic) NSString *conversationID;

+ (id)messagaeModifyRequestModelWithMessage:(id)a0 conversation:(id)a1 newContent:(id)a2 newExt:(id)a3 ticket:(id)a4;
+ (BOOL)isValid:(id)a0;

- (void).cxx_destruct;

@end
