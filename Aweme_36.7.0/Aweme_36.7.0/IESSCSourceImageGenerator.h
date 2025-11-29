@class NSMutableDictionary, AVAssetImageGenerator, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface IESSCSourceImageGenerator : NSObject

@property (retain, nonatomic) AVAssetImageGenerator *imageGenerator;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *thumbnailQueue;
@property (retain, nonatomic) NSMutableDictionary *imageCache;
@property (retain, nonatomic) NSMutableArray *requestedTimes;
@property (retain, nonatomic) NSMutableArray *handleList;
@property (nonatomic) BOOL generating;

- (void)generateThumbnailAtTimes:(id)a0 completion:(id /* block */)a1;
- (id)validRequestTime:(id)a0;
- (void)addRequestedTimes:(id)a0;
- (id)initWithSource:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
- (void)generateThumbnailAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 completion:(id /* block */)a1;
- (id)featchThumbnailAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void).cxx_destruct;

@end
