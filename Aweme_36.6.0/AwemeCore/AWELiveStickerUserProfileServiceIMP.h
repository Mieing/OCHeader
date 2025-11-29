@class NSString;

@interface AWELiveStickerUserProfileServiceIMP : NSObject <IESLiveStickerUserProfileService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)getUserProfileWithID:(id)a0 secUserID:(id)a1 completion:(id /* block */)a2;

@end
