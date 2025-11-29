@class NSArray, BDPUniqueID, NSString;
@protocol BDPXPlayInstanceProtocol, XPlayItemProtocol;

@interface BDPXPlaySystemAPIHandler : NSObject <XPlayAudioCaptureDelegate, XPlayPermissionDelegate, XPlayLocationDelegate, XPlayCloudFileTransferDelegate, XPlayAlbumDelegate>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (weak, nonatomic) id<BDPXPlayInstanceProtocol> instanceDelegate;
@property (weak, nonatomic) id<XPlayItemProtocol> xPlayItem;
@property (retain, nonatomic) NSArray *supportPermissionList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isFileExist:(id)a0;
- (void)onAlbumSaveVideoActionWithDownloadUrl:(id)a0;
- (void)onAlbumPickPhotoAction;
- (void)onAlbumSavePhotoActionWithDownloadUrl:(id)a0;
- (void)handleAudioCaptureState:(BOOL)a0;
- (void)onCloudFileTransfer:(id)a0 callback:(id /* block */)a1;
- (void)requestCurrentLocation:(id /* block */)a0;
- (void)requestPermissionList:(id)a0 completion:(id /* block */)a1;
- (id)initWithUniqueID:(id)a0 xplayItem:(id)a1 instanceDelegate:(id)a2;
- (void)setXPlayAudioCaptureDelegate;
- (void)handleCloudPlayer:(id /* block */)a0;
- (void)handleCommonPermissionRequest:(unsigned long long)a0 :(id /* block */)a1;
- (id)createPermissionResponseWithType:(unsigned long long)a0 status:(long long)a1;
- (BOOL)isFeedNotInnerFlow;
- (void)reportInvokeApiEventWithApiName:(id)a0 resDict:(id)a1 error:(id)a2 durationFrom:(id)a3;
- (BOOL)isVideoFile:(id)a0;
- (BOOL)isPictureFile:(id)a0;
- (void)shareAppMessage:(id)a0 params:(id)a1 isVideo:(BOOL)a2 sourceURL:(id)a3 callback:(id /* block */)a4;
- (id)getBDPScopeName:(unsigned long long)a0;
- (void).cxx_destruct;

@end
