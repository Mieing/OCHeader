@class ACCCameraSubscription, NSString, RACSignal, RACSubject;
@protocol ACCQuickSaveViewModelProtocol;

@interface ACCQuickSaveViewModel : ACCEditViewModel <ACCQuickSaveService>

@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (retain, nonatomic) RACSubject *didClickQuickSaveActionSubject;
@property (retain, nonatomic) ACCCameraSubscription *perfLifeCycleSubscription;
@property (weak, nonatomic) id<ACCQuickSaveViewModelProtocol> delegate;
@property (readonly, nonatomic) RACSignal *didClickQuickSaveActionSignal;
@property (readonly, nonatomic) unsigned long long barItemLoadingStatus;
@property (readonly, nonatomic) double barItemLoadingProgress;
@property (nonatomic) BOOL hasSavedToAlbum;
@property (nonatomic) BOOL hasSavedToCloudAlbum;
@property (nonatomic) BOOL hasSavedToDraftBox;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)saveAlbumToMultiPathEnable;
- (void)addSaveBarItemLoadingStatusChangedSubscriber:(id)a0;
- (void)notifywillTriggerQuickSaveAction;
- (BOOL)isImageAlbumAndDisableSaveImageAlbum;
- (BOOL)canSaveAsVideo;
- (long long)editQuickSaveStyleType;
- (void)quickSaveToAlbumActionWithFromPageType:(unsigned long long)a0;
- (void)quickSaveDraftActionWithFromPageType:(unsigned long long)a0;
- (void)quickSaveLocalOptPublishActionWithFromPageType:(unsigned long long)a0;
- (void)publishPrivateActionWithFromPageType:(unsigned long long)a0;
- (void)publishStoryActionWithFromPageType:(unsigned long long)a0;
- (void)gotoPublishCoverPageWithFromPageType:(unsigned long long)a0;
- (void)normalPublishCoverPageWithFromPageType:(unsigned long long)a0;
- (BOOL)ab_noBlock;
- (void)didClickQuickSaveAction;
- (void)barItemLoadingStatusDidChange:(unsigned long long)a0;
- (void)barItemLoadingProgressDidChange:(double)a0;
- (BOOL)isImageAlbumAndEnableSaveAsVideo;
- (void)progressDidChange:(double)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addSubscriber:(id)a0;

@end
