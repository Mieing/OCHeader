@class SafeDeviceData, NSString, UIView, RichTextView, MMTableViewInfo;

@interface SetDeviceSafeViewController : MMUIViewController <PBMessageObserverDelegate, MMTableViewInfoDelegate, ILinkEventExt> {
    MMTableViewInfo *m_tableViewInfo;
}

@property (retain, nonatomic) SafeDeviceData *currentDevice;
@property (retain, nonatomic) UIView *footerContainerView;
@property (retain, nonatomic) RichTextView *linkView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateTopRightButtion;
- (void)updateSetView;
- (void)updatView;
- (void)willAppear;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (void)actionCell:(id)a0;
- (void)commitEditingForRowAtIndexPath:(id)a0 Cell:(id)a1;
- (void)delCurrentDevice;
- (void)OnClickRightTopBtn;
- (void)MessageReturnDelDevice:(id)a0 Event:(unsigned int)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)registerYReportSdk;
- (unsigned long long)logid;
- (void).cxx_destruct;

@end
