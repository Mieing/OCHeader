@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface IESMMBingoGenertor : NSObject {
    NSObject<OS_dispatch_semaphore> *sem;
}

@property (retain, nonatomic) NSMutableArray *generators;
@property (copy, nonatomic) id /* block */ imageBlock;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NSString *videoKey;
@property (nonatomic) struct CGSize { double width; double height; } generatorSize;
@property (nonatomic) float allCount;
@property (nonatomic) float genratorCount;

+ (id)buildSplitDuetCompositionFor:(id)a0;

- (void)_generateFile:(id)a0 range:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 interval:(double)a2 key:(id)a3;
- (void)generatorWithAsset:(id)a0 times:(id)a1 fps:(double)a2 key:(id)a3;
- (void)addGen:(id)a0;
- (void)removeGen:(id)a0;
- (void)generateFile:(id)a0 range:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 interval:(double)a2 key:(id)a3 image:(id /* block */)a4 completion:(id /* block */)a5;
- (void)cacleGenerator;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
