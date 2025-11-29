@class NSString;
@protocol IESServiceProvider, DVENLEInterfaceProtocol, DVEEditingContextProtocol, DVECoreDraftServiceProtocol, DVECoreActionServiceProtocol, DVEPlayerServiceProtocol;

@interface DVEImportService : NSObject <DVECoreImportServiceProtocol>

@property (weak, nonatomic) id<DVECoreDraftServiceProtocol> draftService;
@property (weak, nonatomic) id<DVECoreActionServiceProtocol> actionService;
@property (weak, nonatomic) id<DVENLEInterfaceProtocol> nle;
@property (weak, nonatomic) id<DVEEditingContextProtocol> mediaContext;
@property (weak, nonatomic) id<DVEPlayerServiceProtocol> playerService;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_addAssetForResource:(id)a0;
- (void)addNLEMainVideoWithResources:(id)a0;
- (long long)p_getMaxLayerForSubVideo;
- (id)p_addNLESubVideoWithResources:(id)a0 targetStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 layer:(int)a2;
- (void)addResources:(id)a0;
- (id)addSubTrackResource:(id)a0;
- (void)replaceResourceForSlot:(id)a0 albumResource:(id)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
