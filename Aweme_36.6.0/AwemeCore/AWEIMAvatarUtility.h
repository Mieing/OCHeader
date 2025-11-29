@class NSString;

@interface AWEIMAvatarUtility : NSObject <AWEIMAvatarServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)loadAvatarWithIMCacheWithImageView:(id)a0 URLArray:(id)a1 placeholder:(id)a2 shareModel:(id)a3 roundCornerRatio:(double)a4 trackScene:(id)a5 completion:(id /* block */)a6;

@end
