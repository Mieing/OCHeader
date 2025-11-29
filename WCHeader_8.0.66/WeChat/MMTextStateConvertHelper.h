@interface MMTextStateConvertHelper : NSObject

+ (id)syncGetDataItemWithImageInfo:(id)a0 screenSize:(struct CGSize { double x0; double x1; })a1;
+ (id)syncGetLivePhotoDataItemWithInfo:(id)a0 videoUrl:(id)a1 screenSize:(struct CGSize { double x0; double x1; })a2;
+ (id)imageResize:(id)a0 andResizeConstraint:(struct CGSize { double x0; double x1; })a1;
+ (id)compressThumbImageForData:(id)a0;
+ (id)compressOriginImageForData:(id)a0;
+ (id)getDataItemFromUserName:(id)a0;
+ (id)getDataItemFromUserName:(id)a0 model:(id)a1;
+ (id)getDataItemFromUserName:(id)a0 model:(id)a1 ignoreModifyTime:(BOOL)a2;

@end
