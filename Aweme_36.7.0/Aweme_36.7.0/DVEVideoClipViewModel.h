@class DVEVCContext, NSArray, NSString, DVEVideoThumbnailManager, NLEModel_OC, NLETrackSlot_OC;
@protocol DVECoreActionServiceProtocol, DVENLEEditorProtocol, DVENLEInterfaceProtocol;

@interface DVEVideoClipViewModel : NSObject <DVEVideoThumbnailLoaderDataSource>

@property (nonatomic) struct CGSize { double width; double height; } thumbSize;
@property (weak, nonatomic) id<DVENLEEditorProtocol> nleEditor;
@property (weak, nonatomic) id<DVENLEInterfaceProtocol> nle;
@property (weak, nonatomic) id<DVECoreActionServiceProtocol> actionService;
@property (retain, nonatomic) NLEModel_OC *cachedModel;
@property (nonatomic) BOOL hasEdited;
@property (weak, nonatomic) DVEVCContext *vcContext;
@property (copy, nonatomic) NSArray *thumbInfos;
@property (retain, nonatomic) DVEVideoThumbnailManager *thumbnailManager;
@property (nonatomic) long long curSlotIndex;
@property (readonly, nonatomic) NLETrackSlot_OC *curSlot;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } curPlayEndTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)saveEdit:(id /* block */)a0;
- (BOOL)enableFrameExtractUseVE;
- (double)timeScaleForSlot:(id)a0;
- (id)assetForSlot:(id)a0;
- (id)absolutePathForResourceNode:(id)a0;
- (void)updateClipRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 slot:(id)a1;
- (void)reloadVideoData;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })currentPlayTimeRange;
- (void)setupThumbInfos;
- (id)slotOfIndex:(long long)a0;
- (void)updateCurSlotWithIndex:(long long)a0;
- (void)cancelEdit;
- (void)p_initCurrentSlotIndex;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
