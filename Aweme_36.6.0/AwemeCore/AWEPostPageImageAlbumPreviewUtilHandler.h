@class NSString;
@protocol ACCEditServiceProtocol;

@interface AWEPostPageImageAlbumPreviewUtilHandler : AWEPostPagePreviewUtilHandler <AWEImageEditPublishPreviewControllerDelegate>

@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willEnterNewcoverChooseEditPage;
- (void)configCoverImage;
- (void)resetPreuploadTaskIfNeed;
- (id)configPreviewControllerWithImage:(id)a0 index:(double)a1 editService:(id)a2;
- (void).cxx_destruct;

@end
