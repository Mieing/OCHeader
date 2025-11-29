@class BDWebImageRequest, NSString;

@interface BDSCImageView : UIImageView

@property (retain, nonatomic) BDWebImageRequest *imageRequest;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *backupImageName;

- (void)setImageWithNamed:(id)a0;
- (void)setImageWithNamed:(id)a0 backupImageNamed:(id)a1;
- (void)reloadImage;
- (void).cxx_destruct;
- (id)initWithImageNamed:(id)a0;

@end
