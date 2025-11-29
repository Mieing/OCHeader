@class NSOperationQueue;

@interface MVPreloadManager : NSObject

@property (retain, nonatomic) NSOperationQueue *operationQueue;

- (void)startPreloadWithItem:(id)a0;
- (id)buildRequestWithItem:(id)a0;
- (id)buildImageRequestWithItem:(id)a0;
- (void)stopPreloadWithItem:(id)a0;
- (void)stopAll;
- (void).cxx_destruct;

@end
