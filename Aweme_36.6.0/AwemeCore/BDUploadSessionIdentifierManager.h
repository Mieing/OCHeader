@class NSDictionary, NSSet, NSObject;
@protocol OS_dispatch_semaphore;

@interface BDUploadSessionIdentifierManager : NSObject {
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSObject<OS_dispatch_semaphore> *_lock;
    NSObject<OS_dispatch_semaphore> *_blockLock;
}

@property (copy, nonatomic) NSDictionary *completionDictionary;
@property (copy, nonatomic) NSSet *identifierSet;
@property (copy, nonatomic) id /* block */ updateIdentifier;

+ (id)shareInstance;

- (BOOL)containsCompletionByidentifier:(id)a0;
- (void)setCompletion:(id /* block */)a0 identifier:(id)a1;
- (void)runCompletionByIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)wait;
- (void)addIdentifier:(id)a0;
- (void)notify;
- (BOOL)containsIdentifier:(id)a0;

@end
