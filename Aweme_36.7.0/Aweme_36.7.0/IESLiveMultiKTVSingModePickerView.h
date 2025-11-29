@class IESLiveInteractionLocalPreviewCapture, NSArray, IESLiveMultiKTVSingModeAPI, NSString, IESLiveMultiKTVStore, UIView, UILabel;
@protocol IESLiveMultiKTVSingModeSwitch;

@interface IESLiveMultiKTVSingModePickerView : UIView <UIImagePickerControllerDelegate, UINavigationControllerDelegate, IESLiveInteractionLocalPreviewCaptureDelegate, HTSLiveMessageSubscriber, IESLiveKTVActions>

@property (weak, nonatomic) IESLiveMultiKTVStore *multiKTVStore;
@property (copy, nonatomic) NSArray *cardViews;
@property (retain, nonatomic) UIView *avatarCardContainerView;
@property (retain, nonatomic) UILabel *avatarAudioStatusLabel;
@property (nonatomic) long long selectedModeIdentifier;
@property (retain, nonatomic) id<IESLiveMultiKTVSingModeSwitch> singModeSwitch;
@property (retain, nonatomic) IESLiveMultiKTVSingModeAPI *api;
@property (retain, nonatomic) IESLiveInteractionLocalPreviewCapture *previewCapture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupViews;
- (void)p_setupBindings;
- (void)p_confirm;
- (id)initWithStore:(id)a0 diContext:(id)a1;
- (void)willStartPlayMusicWithMusicID:(id)a0 afterTime:(long long)a1;
- (void)p_trackEvent:(id)a0 extraParams:(id)a1;
- (void)avatarSnapshotUpdated:(id)a0;
- (void)didAvatarAuditStatusChanged:(long long)a0;
- (void)p_showPopupView:(id)a0 typed:(long long)a1;
- (id)p_createPreviewCaptureOnce;
- (void)p_showVideoPreview;
- (void)p_dismissAllSingModePopupView;
- (void)p_updateUI:(id)a0 asAuditStatusChanged:(long long)a1;
- (void)p_updateAvatarCardContainerView:(id)a0 newImage:(id)a1;
- (id)p_scaledImage:(id)a0 scaleFactor:(double)a1;
- (BOOL)p_isVideoModeEnabled;
- (void).cxx_destruct;
- (void)dealloc;
- (void)messageReceived:(id)a0;

@end
