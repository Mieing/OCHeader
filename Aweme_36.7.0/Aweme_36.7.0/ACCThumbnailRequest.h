@class NSLock, NSString, UIImage, NSMutableArray, NSOperation;

@interface ACCThumbnailRequest : NSObject

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSMutableArray *completionBlocks;
@property (retain, nonatomic) NSOperation *operation;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) BOOL fromCache;

- (id)initWithKey:(id)a0 cacheImage:(id)a1;
- (id)initWithKey:(id)a0 completion:(id /* block */)a1 cancel:(id /* block */)a2;
- (void).cxx_destruct;
- (void)addCompletion:(id /* block */)a0;
- (void)cancel;
- (void)completeWithImage:(id)a0;

@end
