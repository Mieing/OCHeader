@interface AWELandscapeImpl.AwemeModelUtil : NSObject

+ (id)removeDuplicateAndImageFromAwemeModel:(id)a0;
+ (id)removeDuplicateAndImageFromLandscapeCellViewModel:(id)a0;
+ (id)removeDuplicateElementsFromAwemeModel:(id)a0;
+ (id)removeDuplicateElementsFromLandscapeCellViewModel:(id)a0;
+ (id)removeImageAlbumAndVRFromAwemeModel:(id)a0;
+ (id)removeImageAlbumAndVRLandscapeCellViewModel:(id)a0;
+ (id)nonDuplicateModelsFromModels:(id)a0 targetModels:(id)a1;
+ (id)nonDuplicateModelsFromCellModels:(id)a0 targetModels:(id)a1;
+ (BOOL)slideableMixVideoFrom:(id)a0;

- (id)init;

@end
