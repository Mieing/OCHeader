@class NSString;
@protocol ACCCreationCameraInitialInfoProtocol;

@interface ACCCreationCameraDataInfo : ACCCreationToolBaseItemDataInfo <ACCCreationCameraDataInfoProtocol>

@property (retain, nonatomic) id<ACCCreationCameraInitialInfoProtocol> initialContextInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)beautyValues;
- (id)filterIds;
- (id)beautyNames;
- (id)flashMode;
- (void).cxx_destruct;
- (id)effectIds;
- (id)cameraPositions;

@end
