@class TAVSourceImageGenerator;

@interface MAVCompositionThumbGenerator : NSObject

@property (retain, nonatomic) TAVSourceImageGenerator *imageGenerator;

- (id)initWithComposition:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithTrack:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
- (void)requestFrames:(id)a0 completion:(id /* block */)a1;
- (void)destroy;
- (void).cxx_destruct;

@end
