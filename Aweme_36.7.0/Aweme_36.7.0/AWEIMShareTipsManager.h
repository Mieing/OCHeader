@class NSString, NSMutableDictionary, NSDictionary, AWEUINotificationBarView;
@protocol AWEIMShareAndForwardToChatProtocol;

@interface AWEIMShareTipsManager : NSObject <IESIMShareTipsInterface>

@property (retain, nonatomic) AWEUINotificationBarView *notificationBar;
@property (retain, nonatomic) NSString *latestSessionID;
@property (retain, nonatomic) NSMutableDictionary *sessionDict;
@property (retain, nonatomic) id<AWEIMShareAndForwardToChatProtocol> shareImpl;
@property (retain, nonatomic) NSString *flowFromPage;
@property (retain, nonatomic) NSString *flowName;
@property (retain, nonatomic) NSString *flowTips;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isValidTipsViewController:(id)a0;
+ (BOOL)isDisplayedInScreenWithView:(id)a0;
+ (id)sharedInstance;

- (void)showSnackBarForFlowWithShareModel:(id)a0 flowName:(id)a1 flowTips:(id)a2 flowFromPage:(id)a3;
- (void)showTipsWithShareModels:(id)a0 type:(unsigned long long)a1 configParams:(id)a2 trackParams:(id)a3;
- (void)showTipsWithShareModels:(id)a0 config:(id)a1;
- (BOOL)p_checkViewIsValid:(id)a0;
- (id)p_trackEnterChatCommonParamsWithShareModel:(id)a0 con:(id)a1;
- (void)dismissNotificationBar;
- (void)showNotificationBarWithSessionID:(id)a0 config:(id)a1;
- (void)cancelDelayDismiss;
- (void).cxx_destruct;
- (id)init;

@end
