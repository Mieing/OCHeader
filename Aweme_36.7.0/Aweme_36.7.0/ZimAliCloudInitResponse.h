@class NSString;

@interface ZimAliCloudInitResponse : NSObject

@property (retain, nonatomic) NSString *AccessKeyId;
@property (retain, nonatomic) NSString *RetMessageSub;
@property (retain, nonatomic) NSString *BucketName;
@property (retain, nonatomic) NSString *BackupBucketName;
@property (retain, nonatomic) NSString *FileNamePrefix;
@property (retain, nonatomic) NSString *OssEndPoint;
@property (retain, nonatomic) NSString *BackupOssEndPoint;
@property (retain, nonatomic) NSString *ExtParams;
@property (retain, nonatomic) NSString *RetCodeSub;
@property (retain, nonatomic) NSString *Message;
@property (retain, nonatomic) NSString *RetCode;
@property (retain, nonatomic) NSString *CertifyId;
@property (retain, nonatomic) NSString *SecurityToken;
@property (retain, nonatomic) NSString *Protocol;
@property (retain, nonatomic) NSString *AccessKeySecret;
@property (retain, nonatomic) NSString *WishContent;
@property (retain, nonatomic) NSString *ControlConfig;

- (void).cxx_destruct;

@end
