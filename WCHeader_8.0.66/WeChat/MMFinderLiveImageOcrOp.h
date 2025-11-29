@class NSArray, NSMutableArray;

@interface MMFinderLiveImageOcrOp : NSObject

@property (retain, nonatomic) NSArray *images;
@property (retain, nonatomic) NSMutableArray *ocrResults;
@property (nonatomic) BOOL isInImageOCR;
@property (nonatomic) double timeout;
@property (copy, nonatomic) id /* block */ handler;

+ (id)imageToFeatureBuf:(id)a0 filePath:(id)a1;

- (id)initWithImage:(id)a0 timeout:(double)a1 handler:(id /* block */)a2;
- (void)start;
- (void)stop;
- (void)callbackOcrResult;
- (void)releaseOcrXNetCache;
- (void).cxx_destruct;

@end
