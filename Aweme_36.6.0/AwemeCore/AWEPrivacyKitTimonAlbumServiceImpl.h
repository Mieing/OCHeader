@class NSString;

@interface AWEPrivacyKitTimonAlbumServiceImpl : NSObject <AWEPrivacyKitTimonAlbumService>

@property (nonatomic) BOOL enbale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableTimonAlbumServiceKit;
+ (id)sharedInstance;

- (void)setEnable:(BOOL)a0;

@end
