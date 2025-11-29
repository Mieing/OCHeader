@class NSString;

@interface ACCCreationCameraInitialInfo : ACCCreationToolBaseDataInfo <ACCCreationCameraInitialInfoProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)initialCameraPosition;
- (unsigned long long)initialFlashMode;

@end
