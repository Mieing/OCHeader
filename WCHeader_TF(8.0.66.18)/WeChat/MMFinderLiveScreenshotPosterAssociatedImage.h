@class NSString, UIImage;

@interface MMFinderLiveScreenshotPosterAssociatedImage : NSObject

@property (retain, nonatomic) NSString *imageId;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) long long layerLevel;
@property (nonatomic) unsigned long long layerOrder;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedFrame;
@property (readonly, nonatomic) long long order;

- (id)init;
- (void).cxx_destruct;

@end
