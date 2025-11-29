@protocol IESIMFriendsAlbumLongPressPanelConfigurationProtocol;

@interface AWELongPressPanelIMFriendsAlbumViewModel : AWELongPressPanelBaseViewModel

@property (retain, nonatomic) id<IESIMFriendsAlbumLongPressPanelConfigurationProtocol> configuration;

+ (id)longPressPanelViewModel;

- (id)panelBizVMIdentifier;
- (void)p_configureWithConfiguration:(id)a0;
- (BOOL)needShow;
- (void).cxx_destruct;

@end
