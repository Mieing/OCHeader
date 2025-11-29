@class NSString;

@interface ACCCameraBasicInfoGetterImpl : NSObject <ACCCameraBasicInfoGetter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cameraPositionsWithProjectIndex:(long long)a0;
- (id)filterIdsWithProjectIndex:(long long)a0;
- (id)effectIdsWithProjectIndex:(long long)a0;
- (id)effectTextsWithProjectIndex:(long long)a0;
- (id)flashModeWithProjectIndex:(long long)a0;

@end
