@class NSString, IESECImmersiveProductCardViewModel;

@interface IESECGoodsFeedImmersiveBaseView : UIView <IESECGoodsFeedImmersiveBaseViewProtocol>

@property (retain, nonatomic) IESECImmersiveProductCardViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)updateWithViewModel:(id)a0;

@end
