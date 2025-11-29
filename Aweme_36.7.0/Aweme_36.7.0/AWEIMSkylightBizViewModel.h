@class AWEIMSkylightBizInfoDataModel;

@interface AWEIMSkylightBizViewModel : AWEIMOnlineContactAvatarViewModel

@property (retain, nonatomic) AWEIMSkylightBizInfoDataModel *businessModel;
@property (readonly, nonatomic) BOOL exitWhenSkylightDisappear;

- (BOOL)canShowRedDot;
- (void)invokeSelectAction;
- (BOOL)shouldMoveBackToday;
- (void)p_transferToBizDetailWithModel:(id)a0;
- (BOOL)checkEnableTransferToSchema:(id)a0;
- (void)invokeSelectActionWithCompletion:(id /* block */)a0;
- (void)willDisplayCellWithCanRecordShowTimes:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
