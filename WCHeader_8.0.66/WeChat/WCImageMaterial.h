@class UIImage, MMAsset, WCPlayerPlayArgs;

@interface WCImageMaterial : NSObject

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) MMAsset *asset;
@property (retain, nonatomic) WCPlayerPlayArgs *playerArgs;

- (void).cxx_destruct;

@end
