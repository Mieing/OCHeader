@class NSOperationQueue, NSString;

@interface RTVStorageManagerIMP : NSObject <RTVStorage>

@property (readonly, nonatomic) NSOperationQueue *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)areaWithDomain:(id)a0;
- (id)areaWithoutPrefixWithDomain:(id)a0;
- (id)__differentiateDomain:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
