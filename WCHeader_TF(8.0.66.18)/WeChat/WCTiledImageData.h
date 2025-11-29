@class NSMutableDictionary, NSData, UIImage, NSCache;

@interface WCTiledImageData : NSObject

@property (retain, nonatomic) NSData *imageData;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) BOOL isPNGImage;
@property (retain, nonatomic) NSCache *tileImages;
@property (retain, nonatomic) NSMutableDictionary *request;

- (void).cxx_destruct;

@end
