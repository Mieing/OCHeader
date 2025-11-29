@class NSString;
@protocol ACCNLEProvider;

@interface ACCEditorCoreStickerImpl : NSObject <ACCEditorCoreSticker>

@property (weak, nonatomic) id<ACCNLEProvider> provider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)nle;
- (id)initWithNLEProvider:(id)a0;
- (id)stickerSlotWithStickerID:(long long)a0;
- (long long)addImageStickerWithURS:(id)a0 userInfo:(id)a1 configuration:(id /* block */)a2;
- (struct CGPoint { double x0; double x1; })normalizedPointWithOffsetPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)infoStickerWithStickerID:(long long)a0;
- (void).cxx_destruct;

@end
