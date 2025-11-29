@class NSString;

@interface IESLiveGameCPXPlayGameFragment : IESLiveRoomComponent <HTSLiveMessageSubscriber, IESLiveAudiencePullStreamUpdateSubscriber, IESLiveSocialInteractAction, IESLiveSchemaEnterRoomAction>

@property (nonatomic) BOOL openXPlayFailedToastFrequencyControl;
@property (nonatomic) BOOL teenToastFrequencyControl;
@property (nonatomic) BOOL appNotSupportToastFrequencyControl;
@property (nonatomic) long long liveCertFrequencyControl;
@property (nonatomic) BOOL isRealNameAuthRunning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)didJoinChannelWithLayout:(id)a0;
- (void)pullStreamDidUpdate:(id)a0 currentQualityKey:(id)a1;
- (void)willEnterRoomWithSchemaParams:(id)a0;
- (id)xplayGameInterface;
- (void)openRealNameAuth:(id)a0;
- (void)openXPlay:(id)a0;
- (void)showBanInfoPopup:(id)a0;
- (void)openXPlayInterflowAuthIfNeed:(id)a0;
- (void)openLiveCertAlertIfNeed;
- (void)resetOpenXPlayFrequency;
- (void)resetTeenToastFrequency;
- (void)resetAppNotSupportToastFrequencyControl;
- (void)showToast:(id)a0;
- (void)messageReceived:(id)a0;

@end
