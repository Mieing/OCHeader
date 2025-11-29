@class NSString;
@protocol IESServiceProvider;

@interface ACCPOIStickerDataProvider : ACCBaseStickerDataProvider <ACCPOIStickerDataProvider>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)interactionStickers;
- (id)currentTaskId;
- (BOOL)isClipVideoReedit;
- (BOOL)hasInfoStickerAddEdgeData;
- (id)baseTrackData;
- (id)poiStickerFolderForDraft;
- (id)poiStickerImagePathForDraft;
- (void).cxx_destruct;

@end
