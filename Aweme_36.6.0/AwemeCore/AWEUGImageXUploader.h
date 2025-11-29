@class NSMutableArray, NSRecursiveLock;

@interface AWEUGImageXUploader : NSObject

@property (retain, nonatomic) NSMutableArray *clients;
@property (retain, nonatomic) NSRecursiveLock *lock;

+ (id)sharedInstance;

- (void)startUpload:(id)a0 imageConfig:(id)a1 requestParams:(id)a2 authConfig:(id)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;

@end
