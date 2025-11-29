@class AWEIMB2CBottomFloatingAndPanelCellViewModel, NSString;

@interface IESIMInputCompanyBusinessComponent : AWEIMComponentBase <IESIMInputCompanyBusinessInterface, IESIMInputSendBusinessAction, AWEIMComponentLazyCreate>

@property (nonatomic) BOOL isCompanyChat;
@property (nonatomic) BOOL isCompanyProfile;
@property (nonatomic) BOOL isSmartAssistant;
@property (nonatomic) unsigned long long smartAssistantSource;
@property (retain, nonatomic) AWEIMB2CBottomFloatingAndPanelCellViewModel *cellViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lazyComponentWakeupInterface;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)copyTextToInputView:(id)a0 source:(unsigned long long)a1 cellViewModel:(id)a2;
- (void)sendTextViewTextMessage:(BOOL)a0;
- (void)__copyTextToInputView:(id)a0 source:(unsigned long long)a1 cellViewModel:(id)a2;
- (BOOL)shouldShowMenuBtn;
- (void)updateCompanyChat;
- (void)resetSuggestInfo;
- (void).cxx_destruct;

@end
