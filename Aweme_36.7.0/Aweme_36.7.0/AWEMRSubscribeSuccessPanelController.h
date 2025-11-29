@class NSString, UIImageView, AWECodeGenCommonSubscribePopStModel, UIView, UILabel, DUXButton;

@interface AWEMRSubscribeSuccessPanelController : UIViewController <AWEMRSubscribePanelControllerProtocol>

@property (retain, nonatomic) AWECodeGenCommonSubscribePopStModel *popupModel;
@property (retain, nonatomic) UIView *panelView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *coverFetchFailImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) DUXButton *confirmButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getPanelView;
- (id)initWithPopupModel:(id)a0;
- (void)setupPanelView;
- (void).cxx_destruct;
- (void)setup;

@end
