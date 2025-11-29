@class NSString, ACCQuickSaveBarItemDecorator;
@protocol ACCEditServiceProtocol, ACCQuickSaveAlbumOperationDelegate, ACCPublishServiceSaveAlbumHandle;

@interface ACCQuickSaveAlbumOperation : NSObject <ACCPublishServiceSaveAlbumDelegate>

@property (readonly, weak, nonatomic) ACCQuickSaveBarItemDecorator *barItemDecorator;
@property (readonly, copy, nonatomic) NSString *originalDraftID;
@property (readonly, nonatomic) id<ACCPublishServiceSaveAlbumHandle> saveAlbumHandle;
@property (weak, nonatomic) id<ACCQuickSaveAlbumOperationDelegate> delegate;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (nonatomic) BOOL isFromPublishPage;
@property (nonatomic) BOOL needCancel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_createHandleDidFinish:(id)a0 error:(id)a1;
- (void)saveAlbumDidFinishWithError:(id)a0 extra:(id)a1;
- (void)didChangeProgress:(double)a0;
- (BOOL)enableSaveLocalOpt;
- (void)startWithRepository:(id)a0 editService:(id)a1 editModeService:(id)a2 stickerService:(id)a3 barItemDecorator:(id)a4 didReady:(id /* block */)a5 configuration:(id /* block */)a6 isFromPublishPage:(BOOL)a7;
- (void).cxx_destruct;
- (void)dealloc;

@end
