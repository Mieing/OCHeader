@class NSString;

@interface ACCImageAlbumImageMediaInfo : MTLModel

@property (copy, nonatomic) NSString *colorSpaceNameFormat;
@property (copy, nonatomic) NSString *dataUITFormat;
@property (nonatomic) struct CGSize { double width; double height; } resolution;
@property (nonatomic) unsigned long long bitsPerComponent;
@property (nonatomic) unsigned long long bitsPerPixel;
@property (nonatomic) unsigned long long bytesPerRow;
@property (nonatomic) long long length;

+ (void)doAction:(id /* block */)a0 ifValueIsValid:(id)a1;

- (void).cxx_destruct;
- (void)merge:(id)a0;

@end
