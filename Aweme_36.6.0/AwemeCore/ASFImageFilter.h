@class NSString, NSArray, ASFMetalContext, NSMutableArray;
@protocol MTLTexture;

@interface ASFImageFilter : NSObject

@property (retain, nonatomic) id<MTLTexture> texture;
@property (nonatomic) NSString *str;
@property (retain, nonatomic) ASFMetalContext *context;
@property (retain, nonatomic) NSMutableArray *pipelines;
@property (retain, nonatomic) NSArray *inTextures;
@property (retain, nonatomic) NSArray *outTextures;
@property (nonatomic) struct { unsigned long long width; unsigned long long height; unsigned long long depth; } threadNum;

- (id)initWithFunctionName:(id)a0 context:(id)a1;
- (void)configureArgumentTableWithCommandEncoder:(id)a0 param:(struct ASFSharpenParam { void *x0; int x1; int x2; float x3; int x4; int x5; float x6; int x7; int x8; float x9; float x10; int x11; int x12; } *)a1;
- (id)getExecPipeline:(struct ASFSharpenParam { void *x0; int x1; int x2; float x3; int x4; int x5; float x6; int x7; int x8; float x9; float x10; int x11; int x12; } *)a0;
- (void)applyFilterWithTextures:(struct ASFSharpenParam { void *x0; int x1; int x2; float x3; int x4; int x5; float x6; int x7; int x8; float x9; float x10; int x11; int x12; } *)a0;
- (void)applyFilterWithTextures:(struct ASFSharpenParam { void *x0; int x1; int x2; float x3; int x4; int x5; float x6; int x7; int x8; float x9; float x10; int x11; int x12; } *)a0 block:(BOOL)a1;
- (void).cxx_destruct;

@end
