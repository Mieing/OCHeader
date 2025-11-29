@class NSString;

@interface XMailUploadAttachmentTask : NSObject

@property (nonatomic) int errorCode;
@property (retain, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSString *clientMediaID;
@property (retain, nonatomic) NSString *fileId;
@property (retain, nonatomic) NSString *errMsg;

- (void).cxx_destruct;

@end
