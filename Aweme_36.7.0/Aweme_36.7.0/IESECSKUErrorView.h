@class NSString, IESECSKUInvalidView, IESECUIImageView;
@protocol IESECSKUErrorViewDelegate;

@interface IESECSKUErrorView : UIView <IESECSKUInvalidViewDelegate>

@property (weak, nonatomic) id<IESECSKUErrorViewDelegate> delegate;
@property (retain, nonatomic) IESECUIImageView *errView;
@property (retain, nonatomic) IESECSKUInvalidView *invalidView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closeSKUView;
- (void)reloadSKUView;
- (void)tapKnownView;
- (void)showNormalError:(BOOL)a0;
- (void)updateErrorView;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)setupUI;

@end
