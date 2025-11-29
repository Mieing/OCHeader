@class NSString;

@interface AWEDanmakuResourceDownloadModel : NSObject

@property (copy, nonatomic) NSString *targetDirectoryName;
@property (copy, nonatomic) NSString *resourceID;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *serverMd5;
@property (copy, nonatomic) NSString *localFullPath;
@property (nonatomic) long long operationType;

- (id)initWithURL:(id)a0 resourceID:(id)a1 serverMd5:(id)a2;
- (BOOL)checkMd5WithFileMd5:(id)a0;
- (void).cxx_destruct;

@end
