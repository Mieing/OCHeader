@class NSString, AWEVideoPublishViewModel;
@protocol ACCEditServiceProtocol, IESServiceProvider;

@interface ACCImageAlbumFeatureService : NSObject <ACCImageAlbumFeatureServiceProtocol>

@property (readonly, nonatomic) id<ACCEditServiceProtocol> editService;
@property (readonly, weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (readonly, weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindServices:(id)a0;
- (id)initWithServiceProvider:(id)a0 repository:(id)a1;
- (long long)currentImageEditorIndex;
- (id)currentImageItemModel;
- (long long)totalImagePlayerImageCount;
- (void)reloadCurrentPlayerItem;
- (void)startAutoPlayWithKey:(id)a0;
- (void)stopAutoPlayWithKey:(id)a0;
- (id)dependences;
- (void)installDependences;
- (void)installDependencesDidComplete;
- (void).cxx_destruct;

@end
