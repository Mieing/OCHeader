@class NSString;

@interface ACCSocialStickerDataProvider : ACCBaseStickerDataProvider <ACCSocialStickerDataProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)interactionStickers;
- (id)socialStickerImagePathForDraftWithIndex:(long long)a0;

@end
