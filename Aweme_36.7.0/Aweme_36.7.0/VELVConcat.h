@class VELVConcatConfig, VELVCompileManager, IESMMAVExporter;

@interface VELVConcat : IESMMObject

@property (retain, nonatomic) VELVConcatConfig *config;
@property (retain, nonatomic) VELVCompileManager *compileMananger;
@property (nonatomic) BOOL veabtest_enabelFFmpegConcat;
@property (retain, nonatomic) IESMMAVExporter *remuxExporter;
@property (nonatomic) double progress;
@property (nonatomic) BOOL isComplete;
@property (nonatomic) long long count;
@property (copy, nonatomic) id /* block */ progressBlock;

- (void)_queryProgress;
- (void)concatVideoAndImage:(id)a0 videoUrl:(id)a1 progressBlock:(id /* block */)a2 completeBlock:(id /* block */)a3;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)dealloc;
- (void)cancel;

@end
