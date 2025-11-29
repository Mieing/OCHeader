@interface AWENoxusImagePreviewManager : NSObject

+ (id)framePreviewImageForProgress:(double)a0 totalDuration:(double)a1 originalImage:(id)a2 infoModel:(id)a3;
+ (void)fetchPreviewImageWithInfoModel:(id)a0 completion:(id /* block */)a1;

@end
