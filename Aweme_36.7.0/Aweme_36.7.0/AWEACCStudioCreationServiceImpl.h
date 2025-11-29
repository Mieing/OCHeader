@class NSString, ACCStudioInternalSubServiceContainer;
@protocol AWEStudioCreationPOIService, AWEStudioCreationUtilService, AWEStudioFansInteractionService, AWEStudioIMCreationService, AWEStudioFlyBirdService, AWEStudioIMService, AWEStudioAlbumCreationService, AWEStudioScanService;

@interface AWEACCStudioCreationServiceImpl : NSObject <AWEStudioCreationService> {
    ACCStudioInternalSubServiceContainer *m_container;
}

@property (readonly, nonatomic) id<AWEStudioFlyBirdService> flyBird;
@property (readonly, nonatomic) id<AWEStudioIMCreationService> imService;
@property (readonly, nonatomic) id<AWEStudioIMService> im;
@property (readonly, nonatomic) id<AWEStudioCreationUtilService> creationUtilService;
@property (readonly, nonatomic) id<AWEStudioFansInteractionService> fansInteraction;
@property (readonly, nonatomic) id<AWEStudioScanService> scanToScan;
@property (readonly, nonatomic) id<AWEStudioAlbumCreationService> album;
@property (readonly, nonatomic) id<AWEStudioCreationPOIService> creationPOI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
