@class UIImage, BDPUniqueID, BDPCheckBox;

@interface BDPScreenRecordStartGuideContentController : BDPHostPanelContentBaseController

@property (nonatomic) BOOL isConfirm;
@property (retain, nonatomic) UIImage *guideImage;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (weak, nonatomic) BDPCheckBox *checkBox;
@property (copy, nonatomic) id /* block */ confirmAction;

- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;

@end
