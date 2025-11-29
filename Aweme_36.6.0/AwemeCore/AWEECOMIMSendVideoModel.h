@class UIImage, NSString;

@interface AWEECOMIMSendVideoModel : AWEECOMIMSendPhotoModel

@property (retain, nonatomic) UIImage *coverImage;
@property (copy, nonatomic) NSString *duration;
@property (nonatomic) long long mediaSize;
@property (nonatomic) long long maxMediaSize;
@property (nonatomic) float bps;

- (void).cxx_destruct;

@end
