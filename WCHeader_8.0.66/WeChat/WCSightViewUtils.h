@interface WCSightViewUtils : NSObject

+ (struct CGSize { double x0; double x1; })sightViewSizeWithMediaItem:(id)a0;
+ (struct CGSize { double x0; double x1; })sightViewSizeWithMediaItem:(id)a0 isAd:(BOOL)a1;
+ (struct CGSize { double x0; double x1; })sightViewSizeWithMediaItem:(id)a0 isFullPlay:(BOOL)a1;
+ (struct CGSize { double x0; double x1; })thumbImageSizeWithMediaItem:(id)a0;
+ (struct CGSize { double x0; double x1; })sightViewSizeWithImgSize:(struct CGSize { double x0; double x1; })a0 isAd:(BOOL)a1 mediaType:(long long)a2;
+ (struct CGSize { double x0; double x1; })sightViewSizeWithImgSize:(struct CGSize { double x0; double x1; })a0 isAd:(BOOL)a1 mediaType:(long long)a2 isFullPlay:(BOOL)a3 mediaTid:(id)a4;
+ (struct CGSize { double x0; double x1; })getImageSize:(struct CGSize { double x0; double x1; })a0 mediaType:(long long)a1;
+ (double)getSightMaxLength;
+ (int)fetchVerticalDisplayTypeWithTid:(id)a0;

@end
