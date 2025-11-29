@class NSString, NSArray;

@interface AFDMomentContextServiceImpls : NSObject <AFDMomentContextService>

@property (copy, nonatomic) id /* block */ publishMomentBlock;
@property (copy, nonatomic) id /* block */ setCloseFriendPrivacyStatus;
@property (copy, nonatomic) id /* block */ shouldShowInitialPrompt;
@property (nonatomic) BOOL isCameraColdLaunch;
@property (readonly, nonatomic) BOOL isFromNewJourney;
@property (readonly, nonatomic) NSString *tipLabelKey;
@property (nonatomic) long long enterFrom;
@property (nonatomic) double cameraEnterTime;
@property (retain, nonatomic) NSArray *selectedFriends;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)showAlertWithTitle:(id)a0 message:(id)a1 preferredStyle:(long long)a2 cancelButtonTitle:(id)a3 destructiveButtonTitle:(id)a4 otherButtonTitles:(id)a5 tapBlock:(id /* block */)a6;
- (id)uniqueIDForShow;
- (void)initEffect;
- (void)showPopoverWithTarget:(id)a0 TargetPoint:(struct CGPoint { double x0; double x1; })a1 onView:(id)a2 withCover:(BOOL)a3;
- (BOOL)isCloseFriendsType;
- (BOOL)isSaveWithWatermark;
- (BOOL)showNewCloseFriendSettingsPanelWithCompletion:(id /* block */)a0 enterFrom:(id)a1 enterMethod:(id)a2;
- (BOOL)showNewCloseFriendSettingsPanelWithCompletion:(id /* block */)a0 enterFrom:(id)a1 enterMethod:(id)a2 extraParams:(id)a3 enterType:(long long)a4 publishBlock:(id /* block */)a5;
- (void)showNewCloseFriendSettingsPanelForPublishBlockWithCompletion:(id /* block */)a0 isForceBlock:(BOOL)a1 mode:(long long)a2 enterFrom:(id)a3 enterMethod:(id)a4 extraParams:(id)a5 publishBlock:(id /* block */)a6;
- (id)popoverTitle;
- (void)showText:(id)a0;
- (void).cxx_destruct;

@end
