@class NSString, AWEIMMessage, AWEIMUploadFileResponse, NSDictionary, NSError;

@interface IESIMSendAttachmentOutputContext : NSObject <IESIMSendAttachmentOutputProtocol>

@property (nonatomic) int fileType;
@property (nonatomic) long long fileLength;
@property (copy, nonatomic) NSString *fileID;
@property (copy, nonatomic) NSString *fileMD5;
@property (copy, nonatomic) NSString *relativeFilePath;
@property (retain, nonatomic) AWEIMUploadFileResponse *uploadResponse;
@property (retain, nonatomic) AWEIMMessage *message;
@property (nonatomic) long long messageType;
@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSString *messageID;
@property (copy, nonatomic) NSDictionary *messageContentDict;
@property (copy, nonatomic) NSDictionary *localExt;
@property (copy, nonatomic) NSDictionary *syncedExt;
@property (copy, nonatomic) NSString *currentNodeID;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) double currentTime;
@property (nonatomic) double costTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
