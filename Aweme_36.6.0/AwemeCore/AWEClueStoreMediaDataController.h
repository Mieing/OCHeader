@interface AWEClueStoreMediaDataController : NSObject

- (void)fetchMediaDataWithParamDict:(id)a0 completion:(id /* block */)a1;
- (void)recordGuideShownWithStorageKey:(id)a0;
- (BOOL)hasGuideShownWithStorageKey:(id)a0;

@end
