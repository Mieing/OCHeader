@class AWEProfileExtensionAreaCommonParamModel, NSString, NSDictionary, NSDate;
@protocol AWEProfileExtensionAreaCardViewProtocol, AWEProfileExtensionAreaContainerProtocol;

@interface AWEECProfileExtensionAreaMyOrderListCardController : NSObject <AWEProfileExtensionAreaCardControllerProtocol>

@property (retain, nonatomic) id<AWEProfileExtensionAreaCardViewProtocol> cardView;
@property (retain, nonatomic) AWEProfileExtensionAreaCommonParamModel *commonParamModel;
@property (retain, nonatomic) NSString *subtitleText;
@property (nonatomic) BOOL isCurrentUser;
@property (copy, nonatomic) NSDictionary *cardData;
@property (nonatomic) BOOL isOrderCard;
@property (nonatomic) BOOL isIconRepeat;
@property (nonatomic) BOOL shouldShowIconAnimation;
@property (nonatomic) BOOL hasUnread;
@property (nonatomic) BOOL needShowDynamicIcon;
@property (retain, nonatomic) NSDate *createdDate;
@property (retain, nonatomic) NSString *dynamicText;
@property (weak, nonatomic) id<AWEProfileExtensionAreaContainerProtocol> delegate;
@property (nonatomic) BOOL didRelaunchContainerActionCheck;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardControllerWithCommonParam:(id)a0;

- (void)passCardView:(id)a0;
- (void)cardDidClicked;
- (void)configDelegate:(id)a0;
- (void)cardDidAppear;
- (void)cardDidDisappear;
- (BOOL)isForcedToShowAfterHomePageRefresh;
- (BOOL)needToShowDynamicIcon;
- (void)configReminderIconConfigModel:(id)a0;
- (BOOL)shouldShowDot;
- (void)updateSubTitleText;
- (void)updateOrderCounterWhenMsgReceived;
- (id)updateTimeKey;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
