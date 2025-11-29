@class NSString, NSDictionary;

@interface BDECPigeonSendMessage : NSObject

@property (copy, nonatomic) NSString *groupChatIdempotentId;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *bizConversationID;
@property (copy, nonatomic) NSString *messageType;
@property (nonatomic) long long roleType;
@property (copy) NSString *pigeonBizType;
@property (nonatomic) int inbox;
@property (retain) NSDictionary *bizExt;
@property (copy, nonatomic) NSString *bizRole;
@property (nonatomic) BOOL isSaveDB;
@property (nonatomic) BOOL skipSendAndMarkFailed;

- (void).cxx_destruct;
- (id)init;

@end
