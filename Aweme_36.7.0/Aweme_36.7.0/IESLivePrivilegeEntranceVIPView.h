@class IESLiveAnimatedImageView, NSString, IESLivePrivilegeEntranceVIPViewModel;
@protocol IESLiveURLSchemaHandler;

@interface IESLivePrivilegeEntranceVIPView : UIView <IESLivePrivilegeEntranceSubviewDelegate>

@property (retain, nonatomic) IESLivePrivilegeEntranceVIPViewModel *viewModel;
@property (nonatomic) long long entranceType;
@property (retain, nonatomic) IESLiveAnimatedImageView *vipButton;
@property (retain, nonatomic) id<IESLiveURLSchemaHandler> schemaURLHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindState;
- (void)viewDidShowOnContainer:(id)a0;
- (void)viewDidHideFromContainer:(id)a0;
- (void)vipViewTapped;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })viewSize;
- (id)initWithViewModel:(id)a0;
- (void)setupUI;
- (void)addAction;

@end
