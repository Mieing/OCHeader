@class NSString, NSDictionary;

@interface IESIMConversationBotModel : NSObject

@property (readonly, copy, nonatomic) NSString *userID;
@property (readonly, copy, nonatomic) NSString *secUserID;
@property (readonly, copy, nonatomic) NSString *conversationID;
@property (readonly, nonatomic) BOOL enable;
@property (readonly, copy, nonatomic) NSDictionary *ext;

+ (id)convertFromTIMOConversationBot:(id)a0;

- (id)initWithUserID:(id)a0 secUserID:(id)a1 conversationID:(id)a2 enable:(BOOL)a3 ext:(id)a4;
- (BOOL)isAiClone;
- (void).cxx_destruct;

@end
