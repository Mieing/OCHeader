@class NSString, AWEAwemeModel;
@protocol IESGCPGameMetaDataRouter, IESGCPUserService, AWEGCPVideoAnchorRouter;

@interface AWEGCPVideoTrackContextWidget : IESGCPBaseWidget <IESGCPTrackContextProvider>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) BOOL diOptEnable;
@property (weak, nonatomic) id<AWEGCPVideoAnchorRouter> videoAnchorRouter;
@property (weak, nonatomic) id<IESGCPGameMetaDataRouter> gameMetaDataRouter;
@property (retain, nonatomic) id<IESGCPUserService> userService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)provideTrackContext;
- (void)widgetBindService;
- (void).cxx_destruct;

@end
