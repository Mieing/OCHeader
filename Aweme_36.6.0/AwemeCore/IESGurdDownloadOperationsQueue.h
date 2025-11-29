@class NSLock, NSMutableDictionary;

@interface IESGurdDownloadOperationsQueue : NSObject

@property (nonatomic) int count;
@property (retain, nonatomic) NSLock *countLock;
@property (retain, nonatomic) NSMutableDictionary *operationsDictionary;
@property (retain, nonatomic) NSMutableDictionary *fastOperationsDictionary;

+ (id)operationsQueue;

- (void)cancelDownloadWithAccessKey:(id)a0 channel:(id)a1;
- (int)getTaskRemain;
- (BOOL)validateDownloadPriority:(long long)a0;
- (void)innerAddOperation:(id)a0;
- (id)operationKeyWithOperation:(id)a0;
- (id)operationKeyWithAccessKey:(id)a0 channel:(id)a1;
- (void)removeOperationWithAccessKey:(id)a0 channel:(id)a1;
- (void)addOperation:(id)a0 config:(id)a1;
- (id)popNextOperation;
- (id)operationForAccessKey:(id)a0 channel:(id)a1;
- (void)updateDownloadPriority:(long long)a0 operation:(id)a1;
- (id)allDownloadModels;
- (void).cxx_destruct;

@end
