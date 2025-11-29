@class NSString, NSDictionary;

@interface IESIMMsgFileOutput : NSObject <IESIMSendAttachmentNodeOutput>

@property (copy, nonatomic) NSString *fileID;
@property (copy, nonatomic) NSString *relativeFilePath;
@property (copy, nonatomic) NSString *fileMD5;
@property (nonatomic) long long fileLength;
@property (copy, nonatomic) NSDictionary *fakeMsgContentDict;
@property (copy, nonatomic) NSDictionary *localExt;
@property (copy, nonatomic) NSDictionary *syncedExt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fillInOutputContext:(id)a0;
- (void).cxx_destruct;

@end
