@class NSObject;
@protocol OS_dispatch_queue;

@interface ACCEditTextModeLocalCacheHelper : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *saveQueue;

- (id)readGenericTemplatesCache:(id)a0 categoryNameList:(id)a1;
- (void)saveGenericTemplatesCache:(id)a0 categoryName:(id)a1 categoryNameList:(id)a2;
- (void)saveImagesRectToCacheWithFilePath:(id)a0 rectDict:(id)a1;
- (id)readImagesRectFromCacheWithFilePath:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
