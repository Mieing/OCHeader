@class AWEIMResourceURLModel, AWEIMFileMessage, NSString, AWEIMCodeGenFileInfoModel, NSDictionary, NSNumber;

@interface AWEIMMessageFilePreviewConfig : NSObject <AWEIMFileAttachmentConfigProtocol>

@property (retain, nonatomic) AWEIMFileMessage *originMessage;
@property (retain, nonatomic) AWEIMResourceURLModel *resModel;
@property (nonatomic) int fileType;
@property (copy, nonatomic) NSString *uniqueID;
@property (copy, nonatomic) NSString *fileName;
@property (copy, nonatomic) NSString *fileId;
@property (nonatomic) long long scene;
@property (retain, nonatomic) NSNumber *convshortID;
@property (retain, nonatomic) NSString *bizLineTag;
@property (retain, nonatomic) AWEIMCodeGenFileInfoModel *fileInfoModel;
@property (copy, nonatomic) NSString *secretKey;
@property (nonatomic) BOOL chunkSecreted;
@property (nonatomic) long long fileSize;
@property (copy, nonatomic) NSString *fileTypeExtension;
@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSString *messageID;
@property (copy, nonatomic) NSDictionary *extDic;
@property (copy, nonatomic) NSString *subType;
@property (copy, nonatomic) id /* block */ generateUniqueIdBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFileMessage:(id)a0;
- (void).cxx_destruct;

@end
