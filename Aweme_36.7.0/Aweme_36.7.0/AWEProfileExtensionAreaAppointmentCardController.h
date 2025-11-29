@class AWEProfileExtensionAreaCommonParamModel, NSString;
@protocol AWEProfileExtensionAreaCardViewProtocol;

@interface AWEProfileExtensionAreaAppointmentCardController : NSObject <AWEProfileExtensionAreaCardControllerProtocol>

@property (retain, nonatomic) id<AWEProfileExtensionAreaCardViewProtocol> cardView;
@property (retain, nonatomic) AWEProfileExtensionAreaCommonParamModel *commonParamModel;
@property (copy, nonatomic) id /* block */ reloadCardListBlock;
@property (nonatomic) BOOL dotShowing;
@property (copy, nonatomic) NSString *appointmentId;
@property (nonatomic) double expiredTime;
@property (nonatomic) double currentTime;
@property (nonatomic) unsigned long long appointmentTipStyle;
@property (nonatomic) BOOL needShowDynamicIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardControllerWithCommonParam:(id)a0;
+ (id)cardControllerWithUserModel:(id)a0 cardModel:(id)a1 cardIndex:(unsigned long long)a2 extraInfo:(id)a3 reloadCardListBlock:(id /* block */)a4;

- (void)passCardView:(id)a0;
- (void)cardDidClicked;
- (void)cardWillAppear;
- (void)cardDidDisappear;
- (BOOL)isEqualController:(id)a0;
- (BOOL)isForcedToShowAfterHomePageRefresh;
- (BOOL)needToShowDynamicIcon;
- (void)configReminderIconConfigModel:(id)a0;
- (void)tabBarDidChangeNotification:(id)a0;
- (id)initWithModel:(id)a0 reloadCardListBlock:(id /* block */)a1;
- (void)hiddenDotViewIfNeed;
- (id)appointmentKey;
- (id)appointmentKeyForDynamicIcon;
- (void).cxx_destruct;
- (void)dealloc;

@end
