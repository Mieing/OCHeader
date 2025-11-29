@class NSString;

@interface AWEPlayInteractionChapterController : AWEPlayInteractionBaseController <AWEChapterCatalogPanelDelegate, AWEPlayInteractionChapterControllerProtocol>

@property (nonatomic) BOOL showFromSchema;
@property (nonatomic) BOOL showForce;
@property (nonatomic) BOOL playerDidReadyForDisplay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getCurrentPlayedTime;
- (void)jumpToSelectedChapter:(id)a0;
- (void)chapterCatalogPanelDidShowWithPanelHeightRate:(double)a0;
- (void)chapterCatalogPanelWillDismiss;
- (void)chapterCatalogPanelDidDismiss;
- (void)chapterCatalogPanelDragOffset:(double)a0 panelHeightRate:(double)a1;
- (void)onPlayerDidReadyForDisplay:(id)a0;
- (void)showChapterPanelFromSchemaForce:(BOOL)a0;
- (void)showChapterPanelFromSchema;
- (void)showChapterPanelWithEnterMethod:(id)a0 force:(BOOL)a1;
- (void)reset;

@end
