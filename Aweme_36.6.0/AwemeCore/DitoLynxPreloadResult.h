@class AWEPOICubeView, NSError;
@protocol BDXResourceProtocol;

@interface DitoLynxPreloadResult : NSObject

@property (nonatomic) struct CGSize { double width; double height; } renderCompleteSize;
@property (nonatomic) double updateSizeTime;
@property (retain, nonatomic) AWEPOICubeView *lynxContainerView;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) struct CGSize { double width; double height; } preSize;
@property (retain, nonatomic) id<BDXResourceProtocol> resourceInfo;

- (void)tryUpdateRenderCompleteSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)init;

@end
