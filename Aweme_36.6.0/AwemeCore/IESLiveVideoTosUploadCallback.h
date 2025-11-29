@class NSString;

@interface IESLiveVideoTosUploadCallback : NSObject

@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *statusMsg;
@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSString *frameBase64;
@property (copy, nonatomic) NSString *localUrl;

- (void).cxx_destruct;

@end
