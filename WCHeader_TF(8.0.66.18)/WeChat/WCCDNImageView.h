@class NSString;

@interface WCCDNImageView : MMUIImageView

@property (retain, nonatomic) NSString *fileUrl;
@property (retain, nonatomic) NSString *aeskey;
@property (retain, nonatomic) NSString *filePath;
@property (nonatomic) int fileType;
@property (nonatomic) BOOL downloading;

- (void)setDefaultImage:(id)a0;
- (void)setFileUrl:(id)a0 aesk:(id)a1 fileType:(int)a2 filePath:(id)a3;
- (void)checkImageData;
- (void)startDownload;
- (void).cxx_destruct;

@end
