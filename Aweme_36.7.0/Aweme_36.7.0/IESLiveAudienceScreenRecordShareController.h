@class IESLiveScreenRecordApi, NSString, PHFetchResult, HTSEventContext, IESLiveAudienceScreenRecordShareViewModel;

@interface IESLiveAudienceScreenRecordShareController : NSObject <PHPhotoLibraryChangeObserver>

@property (nonatomic) unsigned long long state;
@property (nonatomic) double startRecordTimeS;
@property (nonatomic) double recordDuration;
@property (retain, nonatomic) PHFetchResult *fetchResult;
@property (retain, nonatomic) IESLiveAudienceScreenRecordShareViewModel *viewModel;
@property (copy, nonatomic) NSString *albumCert;
@property (retain, nonatomic) IESLiveScreenRecordApi *api;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (nonatomic) BOOL enableAnchorMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillDisappear;
- (void)componentOrientationChanged:(long long)a0;
- (void)registerNotification;
- (void)p_appWillResignActive:(id)a0;
- (void)onScreenCaptureStatusChanged:(id)a0;
- (BOOL)enableStartScreenRecord;
- (void)hangingTimeout;
- (void)createHighlightFileDirectory;
- (void)handleSystemRecordNotificationWithCaptured:(BOOL)a0;
- (void)fetchPathWithAsset:(id)a0 completion:(id /* block */)a1;
- (void)fetchCoverWithAsset:(id)a0 completion:(id /* block */)a1;
- (id)copyVideoFromSystemPath:(id)a0;
- (void)showScreenRecordShareViewWithPath:(id)a0 coverImage:(id)a1;
- (void)saveMetaDataWithVideoURL:(id)a0 completion:(id /* block */)a1;
- (id)initWithDIContext:(id)a0 trackContext:(id)a1;
- (void).cxx_destruct;
- (void)photoLibraryDidChange:(id)a0;
- (void)dealloc;

@end
