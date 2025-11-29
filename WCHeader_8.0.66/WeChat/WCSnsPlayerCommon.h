@interface WCSnsPlayerCommon : NSObject

+ (BOOL)isPlayerSceneOfMoments:(unsigned long long)a0;
+ (BOOL)allowsH265Download;
+ (id)getPlayerWith:(id)a0 andIsMute:(BOOL)a1 notExistPlayMode:(unsigned long long)a2 andPlayerScene:(unsigned long long)a3;
+ (id)generatePlayerArgsWithMediaItem:(id)a0 isMuted:(BOOL)a1 playMode:(unsigned long long)a2 playerScene:(unsigned long long)a3 downloadArgs:(id)a4;
+ (id)generatePlayerArgsWithLocalLivePhotoPath:(id)a0 isMuted:(BOOL)a1 playerScene:(unsigned long long)a2;
+ (void)setupLivePhotoPlayerArgs:(id)a0;
+ (void)setupLivePhotoPlayerArgs:(id)a0 withMainMediaItem:(id)a1;
+ (id)generateDownloadArgsWrapWithMediaItem:(id)a0 source:(long long)a1 HDRFormat:(long long)a2 playerScene:(unsigned long long)a3;
+ (id)generateFileKeyWithMediaItem:(id)a0 source:(long long)a1;
+ (id)parseMediaIDFromFileKey:(id)a0;
+ (id)getDownloadReferUrlWithScene:(long long)a0;
+ (id)getImageWith:(id)a0;

@end
