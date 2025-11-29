@class NSString, NSDictionary;

@interface RTVRoomChatMessage : JSONModel <RTVXRRoomMessageContent>

@property (copy, nonatomic) NSString *serverMessageID;
@property (copy, nonatomic) NSDictionary *messageContent;
@property (nonatomic) long long messageType;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *roomID;
@property (nonatomic) long long createTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (long long)messageType;

- (long long)messageMethod;
- (long long)sendChannel;
- (id)JSONObjectForServerMessageID;
- (id)JSONObjectForRoomID;
- (id)JSONObjectForUid;
- (void)setMessageContentWithNSString:(id)a0;
- (id)JSONObjectForMessageContent;
- (void).cxx_destruct;

@end
