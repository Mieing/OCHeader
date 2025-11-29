@protocol MTLCommandQueue;

@interface IESSCMetalRenderOptions : NSObject

@property (retain, nonatomic) id<MTLCommandQueue> commandQueue;
@property (nonatomic) BOOL waitUntilCompleted;
@property (copy, nonatomic) id /* block */ commandBufferConfiguration;
@property (copy, nonatomic) id /* block */ completedHandler;

- (void).cxx_destruct;
- (id)init;

@end
