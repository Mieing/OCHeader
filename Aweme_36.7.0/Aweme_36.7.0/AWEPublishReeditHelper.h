@interface AWEPublishReeditHelper : NSObject

+ (id)awemeToReedit:(id)a0;
+ (BOOL)shouldMigrateToInfini:(id)a0;
+ (BOOL)isReedit:(id)a0;
+ (BOOL)isInfiniMulti:(id)a0;
+ (BOOL)isInfiniImageAlbum:(id)a0;
+ (BOOL)isSlides:(id)a0;
+ (id)anchorTypeFromReeditAnchorInfo:(id)a0;
+ (BOOL)isExternalAddPoiInfoWithPublishViewModel:(id)a0;
+ (BOOL)isExternalAddAnchorInfoWithPublishViewModel:(id)a0;

@end
