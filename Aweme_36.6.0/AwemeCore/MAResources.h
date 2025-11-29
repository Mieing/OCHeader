@interface MAResources : NSObject

+ (id)mapBundlePath;
+ (id)currentRootPath;
+ (id)rootPathBefore600;
+ (id)dailyMapLogoString;
+ (id)nightlyMapLogoString;
+ (id)offlineCachePathBefore600;
+ (void)clearDiskOfBefore600;
+ (id)sharedResources;

- (id)embeddedImageWithSourceString:(id)a0;
- (id)imageNamed:(id)a0 withType:(id)a1;
- (id)dailyLogoImage;
- (id)nightLogoImage;
- (id)tileOverlayCachePath;
- (id)imageNamed:(id)a0;

@end
