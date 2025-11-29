@class NSString;

@interface AWEECLynxImageServiceImpl : NSObject <AWEECLynxImageService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canUseCustomImage:(id)a0;
+ (id)getImageFetcherWithSchema:(id)a0;
+ (id)getCustomUIElementsForHunterContainerBullet;
+ (id)getLynxImageElements;


@end
