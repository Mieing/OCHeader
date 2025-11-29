@class NSString;

@interface ACCCreationEditDataInfo : ACCCreationToolBaseItemDataInfo <ACCCreationEditDataInfoProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)clickSaveTime;
- (BOOL)enableHDRNet;
- (id)infoStickerTypes;
- (id)filterIds;
- (id)infoStickerIds;
- (id)interactionStickerIds;
- (id)interactionStickerTypes;
- (id)effectId;

@end
