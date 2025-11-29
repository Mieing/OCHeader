@class NSString, AWEIMPanelViewModel;

@interface AWEIMPanelView : UIView <AWEIMPanelViewProtocol>

@property (retain, nonatomic) AWEIMPanelViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderWithViewModel:(id)a0;
- (void).cxx_destruct;

@end
