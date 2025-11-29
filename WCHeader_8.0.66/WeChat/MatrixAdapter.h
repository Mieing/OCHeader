@protocol MatrixAdapterDelegate;

@interface MatrixAdapter : NSObject

@property (weak, nonatomic) id<MatrixAdapterDelegate> delegate;

+ (id)sharedInstance;

- (void).cxx_destruct;

@end
