@class AWEIMUploadFileResponse, NSDictionary, NSString, NSError;

@interface IESIMSendMsgUploadOutput : NSObject <IESIMSendAttachmentNodeOutput>

@property (retain, nonatomic) NSError *uploadError;
@property (retain, nonatomic) AWEIMUploadFileResponse *result;
@property (copy, nonatomic) NSDictionary *messageContentDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fillInOutputContext:(id)a0;
- (void).cxx_destruct;

@end
