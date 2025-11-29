@class NSArray, IESIMContactPickerComponentContext, NSString;

@interface AWEIMContactPickerMentionGroupShareSendMessageComponent : AWEIMComponentBase <IESIMContactPickerConfirmAction>

@property (retain, nonatomic) NSArray *selectCidList;
@property (retain, nonatomic) IESIMContactPickerComponentContext *pickerComponentContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hostVC_viewDidDisappear;
- (void)hostVC_viewWillAppear;
- (void)componentDidMounted:(id)a0;
- (void)contactPickerConfirmService:(id)a0 didConfirmWithCurrentSelects:(id)a1;
- (id)mentionGroupShareContext;
- (void)p_trackWithActionType:(id)a0;
- (void).cxx_destruct;

@end
