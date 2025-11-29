@class AWEIMResourceURLModel, NSString, NSURL, AWEIMMessageAttachmentDBModel;
@protocol AWEIMFileAttachmentConfigProtocol;

@interface AWEIMFileAttachmentDownloaderDownloadingContext : AWEIMFileAttachmentDownloaderContext

@property (retain, nonatomic) id<AWEIMFileAttachmentConfigProtocol> configProtocol;
@property (copy, nonatomic) NSString *remoteURL;
@property (copy, nonatomic) NSString *targetPath;
@property (copy, nonatomic) NSURL *filePath;
@property (copy, nonatomic) NSString *secretKey;
@property (nonatomic) BOOL chunkSecreted;
@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) AWEIMMessageAttachmentDBModel *dbModel;
@property (retain, nonatomic) AWEIMResourceURLModel *resModel;
@property (copy, nonatomic) NSString *subType;
@property (copy, nonatomic) NSString *uniqueID;
@property (retain, nonatomic) NSString *bizLineTag;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ completeBlock;

- (void).cxx_destruct;

@end
