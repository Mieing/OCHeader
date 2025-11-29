@interface AWEIronManLandingPageDataController : NSObject

@property (nonatomic) unsigned long long enterFrom;
@property (nonatomic) unsigned long long uiVersion;

+ (void)clearStorage;
+ (id)getStorageKeyWithPlatKey:(id)a0;
+ (id)loadDataToMemory;
+ (void)requestPageCallback;

- (void)getWithURLString:(id)a0 params:(id)a1 modelClass:(Class)a2 completion:(id /* block */)a3;
- (void)trackRequestEventWithParams:(id)a0 URL:(id)a1 error:(id)a2;
- (void)saveDataToDiskWithDict:(id)a0;
- (id)init;

@end
