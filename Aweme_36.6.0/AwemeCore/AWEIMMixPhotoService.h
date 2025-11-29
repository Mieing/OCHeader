@class NSString;

@interface AWEIMMixPhotoService : NSObject <AWEIMMixPhotoService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)startMixPhotoWithStickerID:(id)a0 maxMember:(long long)a1 stickerCoverURL:(id)a2 isLora:(BOOL)a3;
- (void)startMixPhotoWithEffectInfo:(id)a0 context:(id)a1;
- (void)forwardLoraMixPhotoWithLoraTaskID:(id)a0 effectInfo:(id)a1 context:(id)a2;

@end
