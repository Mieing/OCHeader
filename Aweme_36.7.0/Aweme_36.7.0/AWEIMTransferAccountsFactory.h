@class NSString, IESIMContactPickerController;
@protocol AWEYAPPickerConfig;

@interface AWEIMTransferAccountsFactory : HTSService <AWEIMTransferAccountsFactory, IESIMContactPickerControllerDelegate>

@property (retain, nonatomic) IESIMContactPickerController *pickerController;
@property (retain, nonatomic) id<AWEYAPPickerConfig> config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)contactPickerControllerDidShowViewController:(id)a0;
- (void)contactPickerControllerDidDismissViewController:(id)a0;
- (void)showPickerUserControllerWithConfig:(id)a0;
- (void)updateTransferMessageWithStatus:(id)a0 msg:(id)a1;
- (void)sendTransferMessageWithContent:(id)a0 preSendMsgID:(id)a1 conversationID:(id)a2 isGroupChat:(BOOL)a3;
- (void).cxx_destruct;

@end
