@class NSString;

@interface AWEStudioFeatureCameraPositionItem : AWEStudioFeatureStatusBaseItem <AWEStudioFeatureCameraPositionItemProtocol>

@property (nonatomic) long long defaultPosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStorage:(id)a0 persistenceKey:(id)a1 defaultCameraPosition:(long long)a2;
- (void)saveCameraPosition:(long long)a0;
- (long long)cameraPosition;

@end
