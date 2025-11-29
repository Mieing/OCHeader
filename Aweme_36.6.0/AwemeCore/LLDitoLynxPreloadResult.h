@class NSError, LLCubeView;
@protocol BDXResourceProtocol;

@interface LLDitoLynxPreloadResult : NSObject

@property (nonatomic) double updateSizeTime;
@property (retain, nonatomic) LLCubeView *lynxContainerView;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) struct CGSize { double width; double height; } preSize;
@property (retain, nonatomic) id<BDXResourceProtocol> resourceInfo;
@property (nonatomic) struct CGSize { double width; double height; } renderCompleteSize;

- (void)tryUpdateRenderCompleteSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)init;

@end
