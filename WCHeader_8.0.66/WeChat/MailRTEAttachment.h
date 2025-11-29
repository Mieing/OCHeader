@class NSString;

@interface MailRTEAttachment : RTETextAttachment <IQQMailExt>

@property (retain, nonatomic) NSString *objectId;
@property (retain, nonatomic) NSString *objectName;
@property (nonatomic) unsigned int dataStatus;
@property (retain, nonatomic) NSString *imagePath;
@property (retain, nonatomic) NSString *attachID;
@property (nonatomic) unsigned int dataSize;

+ (id)DataWriteToTempFile:(id)a0;
+ (id)getTempFilePath;
+ (id)UIImageWriteToTempFile:(id)a0;

- (id)init;
- (unsigned int)type;
- (void)configFrameWithWidth:(double)a0;
- (void)configAttachmentWithImage:(id)a0;
- (void)configAttachmentWithAsset:(id)a0 completion:(id /* block */)a1;
- (id)objectString;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeInContent:(id)a0;
- (double)getHeightOfAttachment;
- (void)OnUploadData:(id)a0 filename:(id)a1 errorCode:(int)a2 errMsg:(id)a3;
- (void).cxx_destruct;

@end
