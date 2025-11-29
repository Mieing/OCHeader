@interface ACCSystemLivePhotoUtils : NSObject

+ (void)fetchTransitionList;
+ (BOOL)isSystemLivePhotoTransitionExist;
+ (void)storeImagesWithImage:(id)a0 WithPublishModel:(id)a1 WithFinishCallback:(id /* block */)a2;
+ (id)storeImagesWithImage:(id)a0 WithPublishModel:(id)a1;

@end
