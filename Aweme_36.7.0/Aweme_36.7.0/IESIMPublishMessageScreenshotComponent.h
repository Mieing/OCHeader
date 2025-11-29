@class NSString;

@interface IESIMPublishMessageScreenshotComponent : AWEIMComponentBase <IESIMPublishMessageScreenshotComponentInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (id)transToImageShootInfo:(id)a0;
- (double)p_scale;
- (id)p_enableShoot:(id)a0;
- (double)imageScale;

@end
