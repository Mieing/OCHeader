@class NSString, AWEPostPageImageAlbumServiceDependencies, NSHashTable, AWEPostPageContext;
@protocol AWEPostPageSlidesService, AWENewPublishImageAlbumTableViewCellActionDelegate;

@interface AWEPostPageImageAlbumHandler : NSObject <AWEPostPageImageAlbumService>

@property (retain, nonatomic) AWEPostPageContext *context;
@property (retain, nonatomic) AWEPostPageImageAlbumServiceDependencies *dependencies;
@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic) long long shoudlEndTitleInputSignal;
@property (nonatomic) long long shouldExitTitleInputSignal;
@property (weak, nonatomic) id<AWEPostPageSlidesService> slidesService;
@property (retain, nonatomic) id<AWENewPublishImageAlbumTableViewCellActionDelegate> cellEventsProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)imageAlbumMixed;
- (id)editService;
- (void)bindServices:(id)a0;
- (void)prepareForCanvasPublishAsImageAlbum;
- (void)resetCanvasPublishAsImageRuntimeVaulesWhenPublishWillStartIfNeed;
- (void)setImageAlbumEditedIfNeeded;
- (void)sendShoudlEndTitleInputSignal;
- (void)reloadCurrentImageData;
- (void)sendshouldExitTitleInputSignal;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;

@end
