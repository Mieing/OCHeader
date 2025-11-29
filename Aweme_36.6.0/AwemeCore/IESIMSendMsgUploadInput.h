@class NSString, NSData, AWEIMMessageContent;

@interface IESIMSendMsgUploadInput : NSObject <IESIMSendAttachmentNodeInput>

@property (copy, nonatomic) NSString *fileID;
@property (copy, nonatomic) NSString *relativeFilePath;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSData *quickData;
@property (copy, nonatomic) NSString *fileMD5;
@property (nonatomic) int fileType;
@property (nonatomic) long long messageType;
@property (copy, nonatomic) NSString *messageID;
@property (copy, nonatomic) NSString *conversationID;
@property (retain, nonatomic) AWEIMMessageContent *messageContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildInputWithOutput:(id)a0 previousOutput:(id)a1 inputContext:(id)a2;

- (void).cxx_destruct;

@end
