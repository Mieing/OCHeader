@class NSString, WCRedEnvTextStateInfo, WCRedEnvTextStateDetailViewController;
@protocol WCRedEnvTextStateDetailControlLogicDelegate;

@interface WCRedEnvTextStateDetailControlLogic : WCRedEnvelopesControlLogic <WCRedEnvTextStateDetailViewControllerDelegate>

@property (retain, nonatomic) WCRedEnvTextStateInfo *detailInfo;
@property (weak, nonatomic) id<WCRedEnvTextStateDetailControlLogicDelegate> delegate;
@property (retain, nonatomic) WCRedEnvTextStateDetailViewController *detailVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
