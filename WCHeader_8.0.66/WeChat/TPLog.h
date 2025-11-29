@protocol TPLogDelegate;

@interface TPLog : NSObject

@property (weak, nonatomic) id<TPLogDelegate> delegate;

+ (id)sharedInstance;

- (void).cxx_destruct;

@end
