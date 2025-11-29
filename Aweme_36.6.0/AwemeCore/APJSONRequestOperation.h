@class NSError, NSRecursiveLock;

@interface APJSONRequestOperation : APHTTPRequestOperation

@property (retain, nonatomic) id responseJSON;
@property (retain, nonatomic) NSError *JSONError;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (nonatomic) unsigned long long JSONReadingOptions;

+ (id)acceptableContentTypes;
+ (BOOL)canProcessRequest:(id)a0;
+ (id)JSONRequestOperationWithRequest:(id)a0 success:(id /* block */)a1 failure:(id /* block */)a2;

- (void)setCompletionBlockWithSuccess:(id /* block */)a0 failure:(id /* block */)a1;
- (void).cxx_destruct;
- (id)error;

@end
