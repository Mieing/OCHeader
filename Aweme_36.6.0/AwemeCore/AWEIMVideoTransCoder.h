@class NSOperationQueue;

@interface AWEIMVideoTransCoder : NSObject

@property (retain, nonatomic) NSOperationQueue *transcodeQueue;

- (id)transcodeWithContext:(id)a0;
- (BOOL)checkOperationExecutingWithMessageId:(id)a0;
- (void)makeOperationFinishWithMessageId:(id)a0;
- (void)cancelOperationWithMessageId:(id)a0;
- (void)cancelPreTransOperationWithAssetIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
