@class UIImage, NSString;

@interface AWEDeliverySendVideoModel : AWEDeliverySendPhotoModel

@property (retain, nonatomic) UIImage *coverImage;
@property (copy, nonatomic) NSString *duration;
@property (nonatomic) long long mediaSize;
@property (nonatomic) long long maxMediaSize;
@property (nonatomic) float bps;

- (id)awed_alogDesc;
- (void).cxx_destruct;

@end
