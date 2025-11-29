@class NSDictionary, NSArray, NSString;

@interface IESIMCombineShareUploadInput : NSObject <IESIMSendAttachmentNodeInput>

@property (nonatomic) long long originConversationId;
@property (copy, nonatomic) NSDictionary *inputContentDict;
@property (copy, nonatomic) NSArray *subMessages;
@property (copy, nonatomic) NSString *messageID;
@property (copy, nonatomic) NSString *conversationID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildInputWithOutput:(id)a0 previousOutput:(id)a1 inputContext:(id)a2;

- (void).cxx_destruct;

@end
