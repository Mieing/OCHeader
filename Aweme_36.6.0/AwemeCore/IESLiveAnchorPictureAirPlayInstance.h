@class NSString, UIImage, IESLiveAnchorPictureAirPlayLaunchModel, IESLiveGCDTimer, NSError;
@protocol IESLiveAnchorPictureAirPlayInstanceDelegate, IESLiveLoadingToastProtocol;

@interface IESLiveAnchorPictureAirPlayInstance : NSObject <IESLiveAnchorPictureAirPlayInstance>

@property (weak, nonatomic) id<IESLiveAnchorPictureAirPlayInstanceDelegate> delegate;
@property (retain, nonatomic) id<IESLiveLoadingToastProtocol> loadingToast;
@property (retain, nonatomic) IESLiveAnchorPictureAirPlayLaunchModel *launchModel;
@property (nonatomic) long long openType;
@property (nonatomic) long long state;
@property (nonatomic) long long oldState;
@property (nonatomic) long long errorCode;
@property (nonatomic) long long cancelType;
@property (nonatomic) long long sourceScene;
@property (nonatomic) long long currentScene;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) IESLiveGCDTimer *timeoutTimer;
@property (copy, nonatomic) NSString *imageURI;
@property (copy, nonatomic) NSString *imageURL;
@property (copy, nonatomic) NSString *auditID;
@property (retain, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)popupContainer;
- (void)uploadImage;
- (void)showToastWithText:(id)a0;
- (void)destroyInstance;
- (id)toastFactory;
- (void)showLoadingToast;
- (void)handleAuditResultMessage:(id)a0;
- (BOOL)isInGuidePage;
- (void)changeStateTo:(long long)a0;
- (void)syncStatusWithIsOpen:(BOOL)a0;
- (void)hideLoadingToast:(BOOL)a0;
- (void)changeStateTo:(long long)a0 notifyStateChanged:(BOOL)a1;
- (id)defaultErrorToast;
- (void)sendAudit;
- (void)handleAuditResult:(long long)a0 auditId:(id)a1 toast:(id)a2;
- (void)notifyStateDidChange;
- (void)logStateDidChange;
- (void)cancelAirPlayWithType:(long long)a0;
- (id)initWithOpenType:(long long)a0 LaunchModel:(id)a1 delegate:(id)a2;
- (void)openAirPlay;
- (void)closeAirPlay;
- (void)keepOpenState;
- (void)fetchAuditResult;
- (void).cxx_destruct;
- (BOOL)isAirPlaying;
- (id)room;
- (id)api;
- (void)stopTimeoutTimer;
- (void)startTimeoutTimer;

@end
