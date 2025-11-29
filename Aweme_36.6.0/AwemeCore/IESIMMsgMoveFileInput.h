@class NSString, AWEIMMessageContent, NSDictionary;
@protocol IESIMConversationProtocol;

@interface IESIMMsgMoveFileInput : NSObject <IESIMSendAttachmentNodeInput>

@property (nonatomic) int fileType;
@property (retain, nonatomic) id<IESIMConversationProtocol> con;
@property (copy, nonatomic) NSString *tmpPath;
@property (retain, nonatomic) AWEIMMessageContent *messageContent;
@property (copy, nonatomic) NSDictionary *extraContentDict;
@property (copy, nonatomic) NSDictionary *syncedExt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildInputWithOutput:(id)a0 previousOutput:(id)a1 inputContext:(id)a2;

- (void).cxx_destruct;

@end
