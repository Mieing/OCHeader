@class NSString;

@interface AWEImageAlbumTransferShortPathManager : NSObject <AWEImageAlbumTransferShortPathManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)publishPageTransferToEditPageWithPublishModel:(id)a0 editService:(id)a1 sequenceEditService:(id)a2 completion:(id /* block */)a3;


@end
