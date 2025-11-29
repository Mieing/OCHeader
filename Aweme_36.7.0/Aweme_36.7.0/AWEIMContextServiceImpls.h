@class NSString, NSArray;

@interface AWEIMContextServiceImpls : NSObject <AFDMomentContextService>

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

- (BOOL)isColdLaunch;
- (void)showAlertWithTitle:(id)a0 message:(id)a1 preferredStyle:(long long)a2 cancelButtonTitle:(id)a3 destructiveButtonTitle:(id)a4 otherButtonTitles:(id)a5 tapBlock:(id /* block */)a6;
- (void)initEffect;
- (void)showPopoverWithTarget:(id)a0 TargetPoint:(struct CGPoint { double x0; double x1; })a1 onView:(id)a2 withCover:(BOOL)a3;
- (BOOL)isCloseFriendsType;
- (void)showText:(id)a0;
- (void).cxx_destruct;

@end
