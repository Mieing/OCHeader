@class NSString, AWEVideoPublishViewModel;

@interface AWEPOIUGCImageAlbumTemplate : NSObject <ACCBusinessTemplate>

@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPublishModel:(id)a0;
- (id)componentClasses;
- (id)componentPluginClasses;
- (id)infiniComponentClasses;
- (id)infiniPreviewComponentClasses;
- (id)infiniEditComponentClasses;
- (id)defaultPreviewComponentClasses;
- (id)defaultEditComponentClasses;
- (id)defaultComponentClasses;
- (void).cxx_destruct;

@end
