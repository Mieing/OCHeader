@class VEAlgorithmSession;

@interface AWEVideoCoverAIReframeManager : NSObject

@property (retain, nonatomic) VEAlgorithmSession *algSession;

+ (id)shareInstance;

- (void)fetchAiFrameModel;
- (id)cropImage:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)handleCoverImages:(id)a0 reFrameRatio:(double)a1 needCroppedImage:(BOOL)a2 completion:(id /* block */)a3;
- (BOOL)isAiFrameModelDownload;
- (void).cxx_destruct;
- (id)init;
- (void)cancel;

@end
