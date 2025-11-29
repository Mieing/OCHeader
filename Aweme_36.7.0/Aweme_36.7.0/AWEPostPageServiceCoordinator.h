@class NSString;
@protocol AWEPostPageListService, AWEPostPageInputService, AWEPostPagePreviewService, AWEPostPagePlayerService, AWEPostPageRouterService, AWEPostPageImageAlbumService, AWEPostPageDraftService, AWEPostPageMainPostService, AWEPostPageSlidesService, IESServiceProvider;

@interface AWEPostPageServiceCoordinator : NSObject <AWEPostPageServiceCoordinator>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<AWEPostPageMainPostService> post;
@property (weak, nonatomic) id<AWEPostPagePreviewService> preview;
@property (weak, nonatomic) id<AWEPostPageDraftService> draft;
@property (weak, nonatomic) id<AWEPostPagePlayerService> player;
@property (weak, nonatomic) id<AWEPostPageImageAlbumService> imageAlbum;
@property (weak, nonatomic) id<AWEPostPageRouterService> router;
@property (weak, nonatomic) id<AWEPostPageListService> list;
@property (weak, nonatomic) id<AWEPostPageInputService> input;
@property (weak, nonatomic) id<AWEPostPageSlidesService> slides;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)serviceForProtocol:(id)a0;
- (void)bindServices:(id)a0;
- (void).cxx_destruct;

@end
