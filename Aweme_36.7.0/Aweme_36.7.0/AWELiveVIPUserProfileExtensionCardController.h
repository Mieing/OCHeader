@class AWEProfileExtensionAreaCommonParamModel, NSString;
@protocol AWEProfileExtensionAreaCardViewProtocol;

@interface AWELiveVIPUserProfileExtensionCardController : NSObject <AWEProfileExtensionAreaCardControllerProtocol>

@property (retain, nonatomic) AWEProfileExtensionAreaCommonParamModel *commonParamModel;
@property (retain, nonatomic) id<AWEProfileExtensionAreaCardViewProtocol> cardView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardControllerWithCommonParam:(id)a0;

- (void)passCardView:(id)a0;
- (void)cardDidClicked;
- (id)trackerExtraParamsWithEventName:(id)a0;
- (BOOL)shouldShowRedDot;
- (BOOL)isHostProfile;
- (id)getMessageNotificationMsgSecDictFor:(id)a0;
- (id)cutVIPMessageNotificationMsgSecDictIfNeed:(id)a0;
- (void).cxx_destruct;

@end
