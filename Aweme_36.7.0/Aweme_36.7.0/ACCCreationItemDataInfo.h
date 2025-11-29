@class NSString;
@protocol ACCCreationCameraDataInfoProtocol, ACCCreationSessionDataInfoProtocol, ACCCreationEditDataInfoProtocol, ACCCreationAlbumItemDataInfoProtocol;

@interface ACCCreationItemDataInfo : ACCCreationToolBaseItemDataInfo <ACCCreationItemDataInfoProtocol>

@property (retain, nonatomic) id<ACCCreationCameraDataInfoProtocol> cameraData;
@property (retain, nonatomic) id<ACCCreationEditDataInfoProtocol> editData;
@property (retain, nonatomic) id<ACCCreationSessionDataInfoProtocol> sessionData;
@property (retain, nonatomic) id<ACCCreationAlbumItemDataInfoProtocol> cameraAlbumItemData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
