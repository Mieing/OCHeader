@class VDMetalContext, NSMutableArray;

@interface MetalFilter : NSObject

@property (retain, nonatomic) VDMetalContext *context;
@property (retain, nonatomic) NSMutableArray *pipelines;
@property (nonatomic) struct { unsigned long long width; unsigned long long height; unsigned long long depth; } threadNum;
@property (nonatomic) struct { unsigned long long width; unsigned long long height; unsigned long long depth; } threadGroupsCount;

- (id)initWithFilterName:(id)a0 Context:(id)a1;
- (int)execFilterInput:(void *)a0 Output:(void *)a1 Block:(BOOL)a2;
- (id)getExecPipeline;
- (void)configureArgsTableWithEncoder:(id)a0 Param:(struct SdrMetalParam { } *)a1;
- (void).cxx_destruct;

@end
