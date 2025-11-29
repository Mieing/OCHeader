@class OMJMovieExportSettings;

@interface OMJImageExportSettings : NSObject

@property (readonly, nonatomic) unsigned long long imageType;
@property (readonly, nonatomic) struct CGSize { double width; double height; } imageLimitedPixelSize;
@property (readonly, nonatomic) OMJMovieExportSettings *videoExportSettings;

- (id)initWithImageType:(unsigned long long)a0 imageLimitedPixelSize:(struct CGSize { double x0; double x1; })a1 videoExportSettings:(id)a2;
- (id)description;
- (void).cxx_destruct;

@end
