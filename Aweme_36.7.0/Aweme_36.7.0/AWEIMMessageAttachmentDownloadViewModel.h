@class AWEIMResourceURLModel, NSString, MediaDecrypter, NSError;
@protocol IESIMNetworkDownloadRequest;

@interface AWEIMMessageAttachmentDownloadViewModel : NSObject

@property (copy, nonatomic) NSString *messageID;
@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSString *localFilePath;
@property (retain, nonatomic) NSString *secretKey;
@property long long retryCount;
@property (nonatomic) long long maxRetryCount;
@property (retain, nonatomic) MediaDecrypter *decrypter;
@property (nonatomic) double progress;
@property (nonatomic) unsigned long long status;
@property (nonatomic) unsigned long long downloadResourceType;
@property (nonatomic) double size;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) double decryptDurationInSec;
@property (nonatomic) BOOL didRefreshURL;
@property (nonatomic) BOOL needRefreshURL;
@property (retain, nonatomic) AWEIMResourceURLModel *downloadResourceUrlModel;
@property (weak, nonatomic) id<IESIMNetworkDownloadRequest> request;

- (void)resetRetryCount;
- (void).cxx_destruct;

@end
