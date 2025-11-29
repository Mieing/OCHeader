@interface IESLiveXPlayExternalRendererInfo : NSObject

@property (nonatomic) BOOL enableExternalRender;
@property (nonatomic) BOOL enableRenderProcessor;
@property (nonatomic) double sharpness;
@property (nonatomic) double brightness;
@property (nonatomic) double contrast;

- (id)initWithExternalRender:(BOOL)a0 enableRenderProcessor:(BOOL)a1 sharpness:(double)a2 brightness:(double)a3 contrast:(double)a4;

@end
