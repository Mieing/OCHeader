@class NSString, UIImage;

@interface IESLivePhotoTosUploadCallback : NSObject

@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *statusMsg;
@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *frameBase64;
@property (retain, nonatomic) UIImage *uploadImage;

- (void).cxx_destruct;

@end
