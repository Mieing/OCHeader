@interface WCMaterialClassifyHelper : NSObject

+ (void)asyncCalculateClassifyLabelsWithVideos:(id)a0 images:(id)a1 completionHandler:(id /* block */)a2;
+ (void)asyncCalculateClassifyLabelsForFinderWithVideos:(id)a0 images:(id)a1 completionHandler:(id /* block */)a2;
+ (void)_asyncCalculateClassifyLabelsWithVideos:(id)a0 images:(id)a1 scene:(unsigned long long)a2 completionHandler:(id /* block */)a3;
+ (BOOL)isBGMFeatureModelWithName:(id)a0;
+ (void)asyncCalculateClassifyLabelsWithImages:(id)a0 completionHandler:(id /* block */)a1;
+ (id)syncCalculateClassifyLabelsWithImage:(id)a0;
+ (id)modelKeysForClassifierWithScene:(unsigned long long)a0;

@end
