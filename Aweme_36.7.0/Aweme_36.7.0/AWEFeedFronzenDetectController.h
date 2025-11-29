@class NSArray, NSString, UIView;

@interface AWEFeedFronzenDetectController : AWEBaseController <HMDUIFrozenGestureDetectProtocol>

@property (nonatomic) BOOL hasAddDetector;
@property (nonatomic) BOOL isInDetecting;
@property (retain, nonatomic) UIView *blankView;
@property (nonatomic) BOOL enableDetect;
@property (copy, nonatomic) NSArray *enableCells;
@property (copy, nonatomic) NSArray *enableTypes;
@property (copy, nonatomic) NSArray *disabledDetectTopVCList;
@property (copy, nonatomic) NSArray *disabledDetectChildVCList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollViewDidScrollEndWithActive;
- (BOOL)shouldUploadUIFrozenException;
- (id)getCustomExceptionData;
- (BOOL)checkEnableFronzenDetect;
- (void)onFronzenNotification:(id)a0;
- (void)tryAddDetector;
- (void)tryStartRecord;
- (void)tryDisableDetector;
- (void)checkNeedStartDetector:(id)a0 model:(id)a1;
- (void)tryStopRecord;
- (void)reportFeedFronze:(id)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)init;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillDisappear;

@end
