@class AWERVLVAnchorView;

@interface AWERVLVAnchorInfoElement : AWERVVideoInfoBaseElement

@property (retain, nonatomic) AWERVLVAnchorView *anchorView;

- (id)commonParams;
- (BOOL)shouldShowAnchorWithData:(id)a0;
- (void)trackLVButtonShowWithButtonText:(id)a0 buttonName:(id)a1;
- (void)trackLVButtonClickWithButtonText:(id)a0 buttonName:(id)a1;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)viewDidLoad;

@end
