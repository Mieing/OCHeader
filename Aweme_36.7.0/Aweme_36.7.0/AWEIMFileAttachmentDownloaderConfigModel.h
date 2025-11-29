@class NSString, AWEIMResourceURLModel, NSDictionary;

@interface AWEIMFileAttachmentDownloaderConfigModel : NSObject <AWEIMFileAttachmentConfigProtocol>

@property (retain, nonatomic) AWEIMResourceURLModel *resModel;
@property (nonatomic) int fileType;
@property (copy, nonatomic) NSString *uniqueID;
@property (copy, nonatomic) NSString *fileName;
@property (copy, nonatomic) NSString *secretKey;
@property (nonatomic) BOOL chunkSecreted;
@property (nonatomic) long long fileSize;
@property (copy, nonatomic) NSString *fileTypeExtension;
@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSString *messageID;
@property (copy, nonatomic) NSDictionary *extDic;
@property (copy, nonatomic) NSString *subType;
@property (copy, nonatomic) id /* block */ generateUniqueIdBlock;
@property (retain, nonatomic) NSString *bizLineTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
