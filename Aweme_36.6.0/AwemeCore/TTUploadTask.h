@class TTUploadTaskParam;

@interface TTUploadTask : NSObject

@property (retain) TTUploadTaskParam *userParam;
@property (copy) id /* block */ userResultBlock;
@property (copy) id /* block */ userProgressBlock;
@property long long hadUploadSizeInit;

- (void)queryUploadProgressAsync:(id /* block */)a0 param:(id)a1 status:(long long)a2;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;

@end
