@class NSString, NSError;

@interface AWEIMEncryptImageUploadResult : NSObject

@property (nonatomic) BOOL success;
@property (copy) NSString *remoteURI;
@property (copy) NSString *remoteURL;
@property (copy) NSString *skey;
@property (copy) NSString *md5;
@property (nonatomic) unsigned long long fileSize;
@property (copy, nonatomic) NSString *localPath;
@property (retain) NSError *error;

- (void).cxx_destruct;
- (id)description;

@end
