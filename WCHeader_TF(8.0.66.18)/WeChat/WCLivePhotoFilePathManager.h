@interface WCLivePhotoFilePathManager : NSObject

+ (id)cacheRootDir;
+ (id)getTempCachePath;
+ (id)getLivePhotoHEICPath:(id)a0;
+ (id)getLivePhotoJPGPath:(id)a0;
+ (id)getLivePhotoMovPath:(id)a0;
+ (id)getImagePathWithFileName:(id)a0;

@end
