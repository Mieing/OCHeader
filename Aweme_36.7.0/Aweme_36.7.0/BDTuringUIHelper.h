@class NSDictionary;
@protocol BDTuringUIHelperDelegate;

@interface BDTuringUIHelper : NSObject

@property (nonatomic) BOOL shouldCloseFromMask;
@property (nonatomic) BOOL showNavigationBarWhenDisappear;
@property (nonatomic) BOOL turingForbidLandscape;
@property (nonatomic) BOOL supportLandscape;
@property (nonatomic) BOOL disableLoadingView;
@property (nonatomic) BOOL isShowAlert;
@property (nonatomic) long long smsDigits;
@property (nonatomic) long long emailDigits;
@property (copy) NSDictionary *verifyThemeDictionary;
@property (copy) NSDictionary *smsThemeDictionary;
@property (copy) NSDictionary *qaThemeDictionary;
@property (copy) NSDictionary *verifyTextDictionary;
@property (copy) NSDictionary *smsTextDictionary;
@property (copy) NSDictionary *qaTextDictionary;
@property (copy) NSDictionary *sealThemeDictionary;
@property (copy) NSDictionary *sealTextDictionary;
@property (nonatomic) unsigned long long originalSupportedOrientations;
@property (weak, nonatomic) id<BDTuringUIHelperDelegate> uiHelperHandler;
@property (nonatomic) BOOL presentViewPortraitRollBackSwitch;
@property (nonatomic) BOOL liveDetectPortraitRollBackSwitch;

+ (double)statusBarHeight;
+ (id)sharedInstance;
+ (id)keyWindow;

- (void)rollBackSwitchInit;
- (void).cxx_destruct;
- (id)init;

@end
