@class NSObject, NSString, UIView;
@protocol IESIMToastLoadingProtocol, AWEIMMessageListTrackerInterface, IESIMAwemeMediaVideoDownloaderProtocol;

@interface AWEIMShootSameAnchorComponent : AWEIMFlexComponent <AWEIMShootSameAnchorInterface>

@property (retain, nonatomic) UIView<IESIMToastLoadingProtocol> *loading;
@property (weak, nonatomic) id<AWEIMMessageListTrackerInterface> tracker;
@property (retain, nonatomic) NSObject<IESIMAwemeMediaVideoDownloaderProtocol> *downloader;
@property (nonatomic) BOOL tapShootSameFromCoplayView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)presenter:(id)a0 didUpdateWithView:(id)a1;
- (id)p_transformToJsonStringWithUgcId:(id)a0;
- (void)p_trackStickerShootShowWithMessage;
- (void)shootSameActionInvoke;
- (void)p_openCamera;
- (id)propsTitleWithMessage:(id)a0;
- (void)downloadCoPlayResourceCompletion:(id /* block */)a0;
- (void)p_downloadVideoWithMessage:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
