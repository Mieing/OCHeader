@class NSString;

@interface OWXEmptyTextureRegister : NSObject <OMJTextureRegister>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)registerTextureWithHolder:(id)a0;
- (void)textureFrameAvailableWithID:(long long)a0;
- (void)unregisterTextureWithID:(long long)a0;

@end
