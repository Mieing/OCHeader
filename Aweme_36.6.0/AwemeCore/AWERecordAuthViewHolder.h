@class AWERecordAuthComponent, UIImageView, FPStateFlow, UIView, ACCAnimatedButton;
@protocol AWEStudioAuthorityViewProtocol, FPUIComponent;

@interface AWERecordAuthViewHolder : NSObject <FPUIHolder>

@property (class, readonly, nonatomic) Class componentType;

@property (retain, nonatomic) FPStateFlow *stateFlow;
@property (retain, nonatomic) UIImageView *cameraBlurMaskView;
@property (retain, nonatomic) UIView<AWEStudioAuthorityViewProtocol> *authorityView;
@property (retain, nonatomic) ACCAnimatedButton *authorityCloseBtn;
@property (retain, nonatomic) AWERecordAuthComponent *component;
@property (retain, nonatomic) id<FPUIComponent> typeErasedComponent;

- (void)clickAuthorityCloseBtn:(id)a0;
- (void)checkAuthorityRestricted:(id)a0;
- (id)cameraGrantAlertCancelBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWith:(id)a0;

@end
