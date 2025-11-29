@class NSString, NSDictionary, AWEIMSendMessageAttachmentObject, NSMutableDictionary, NSMutableArray, AWEIMMessageAttachmentDBModel;

@interface AWEIMMessageAttachmentUploadDataModel : NSObject <IESIMSendAttachmentNodeInput, IESIMSendAttachmentNodeOutput>

@property (retain, nonatomic) AWEIMSendMessageAttachmentObject *sendObj;
@property (retain, nonatomic) NSMutableArray *dbModelArray;
@property (retain, nonatomic) AWEIMMessageAttachmentDBModel *videoCoverDBModel;
@property (retain, nonatomic) NSString *messageID;
@property (nonatomic) long long messageType;
@property (retain, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSDictionary *sendContext;
@property (retain, nonatomic) NSMutableDictionary *content;
@property (retain, nonatomic) NSString *videoAssetIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildInputWithOutput:(id)a0 previousOutput:(id)a1 inputContext:(id)a2;

- (void)fillInOutputContext:(id)a0;
- (void).cxx_destruct;

@end
