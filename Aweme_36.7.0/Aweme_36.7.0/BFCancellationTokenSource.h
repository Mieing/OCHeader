@class BFCancellationToken;

@interface BFCancellationTokenSource : NSObject

@property (readonly, nonatomic) BFCancellationToken *token;
@property (readonly, nonatomic, getter=isCancellationRequested) BOOL cancellationRequested;

+ (id)cancellationTokenSource;

- (void).cxx_destruct;
- (id)init;
- (void)dispose;
- (void)cancel;
- (void)cancelAfterDelay:(int)a0;

@end
