@class IESLiveWebpLoadingView, NSString, UIImage, UIView, UILabel, UIImageView, IESLiveMultiKTVSingModeAPI, UIButton, NSNumber, IESLiveInteractionLocalPreviewCapture;
@protocol IESLiveMultiKTVSingModeSwitch;

@interface IESLiveMultiKTVAvatarPreviewView : UIView <IESLiveInteractionLocalPreviewCaptureDelegate>

@property (retain, nonatomic) NSNumber *roomID;
@property (nonatomic) BOOL inPreviewMode;
@property (nonatomic) BOOL realTimeAvatarEnabled;
@property (retain, nonatomic) IESLiveInteractionLocalPreviewCapture *previewCaputre;
@property (retain, nonatomic) UIImage *originalImage;
@property (copy, nonatomic) NSString *avatarCustomConfig;
@property (retain, nonatomic) id<IESLiveMultiKTVSingModeSwitch> singModeSwitch;
@property (retain, nonatomic) IESLiveMultiKTVSingModeAPI *singModeAPI;
@property (retain, nonatomic) IESLiveWebpLoadingView *loadingView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIImageView *previewImageView;
@property (retain, nonatomic) UIView *realTimeContainerView;
@property (retain, nonatomic) UIView *realTimeCheckOffView;
@property (retain, nonatomic) UIImageView *realTimeCheckOnImageView;
@property (retain, nonatomic) UILabel *realTimeSwitchTitleLabel;
@property (retain, nonatomic) UIButton *reScanButton;
@property (retain, nonatomic) UIButton *confirmButton;
@property (nonatomic) BOOL avatarModelLoading;
@property (copy, nonatomic) NSString *loadedAvatarFilePath;
@property (nonatomic) BOOL isUploading;
@property (copy, nonatomic) id /* block */ isInVideoModePredicate;
@property (copy, nonatomic) id /* block */ triggerRescanAction;
@property (copy, nonatomic) id /* block */ avatarSnapshotUpdated;
@property (copy, nonatomic) id /* block */ trackCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupViews;
- (void)p_dismiss;
- (void)p_confirm;
- (void)didRecieveEffectMessage:(unsigned long long)a0 param1:(unsigned long long)a1 param2:(unsigned long long)a2 data:(id)a3;
- (void)loadCustomAvatarConfig:(id)a0;
- (id)initWithPreviewCapture:(id)a0 originalImage:(id)a1 inPreviewMode:(BOOL)a2 diContext:(id)a3 predicate:(id /* block */)a4;
- (long long)p_currentUserGender;
- (void)p_initializePreview:(id)a0;
- (void)p_switchRealTimeOption;
- (void)p_rescan;
- (void)p_updateRealTimeSwitchApperance;
- (void)p_updateUIWithLoadingState:(BOOL)a0;
- (void)p_applyAvatarResultModel:(id)a0;
- (void)submit2AuditWithAvatarPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)p_avatarSnapshotImageWithPixelBuffer:(struct __CVBuffer { } *)a0;
- (void)p_saveDefaultAvatarFailed;
- (void)p_saveDefaultAvatarSuccess:(id)a0;
- (void)p_saveCustomAvatarFailed;
- (void)p_saveCustomAvatarSuccess:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)dealloc;

@end
