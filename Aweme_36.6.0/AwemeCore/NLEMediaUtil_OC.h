@interface NLEMediaUtil_OC : NSObject

+ (void)clearAllFreeMemoryCache:(long long)a0;
+ (id)sharedInstance;

- (id)getMediaVideoInfo:(id)a0;
- (id)getMediaAudioInfo:(id)a0;
- (id)getMediaInfo:(id)a0;
- (BOOL)isHDREncodedWithMultiAssetPaths:(id)a0;
- (int)createMediaResource:(id)a0 nlModel:(id)a1;
- (int)releaseMediaResource;

@end
