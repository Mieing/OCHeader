@class AWEProfileGuidePopoverHelper, DUXPopover, NSString;

@interface AWEProfileEAPopoverComponent : AWEProfileEABaseController <AWEProfileEACollectionViewEvent, AWEProfileEADataSourceEvent, AWEProfileEAHintProtocol>

@property (weak, nonatomic) DUXPopover *popover;
@property (weak, nonatomic) AWEProfileGuidePopoverHelper *popoverHelper;
@property (nonatomic) BOOL isOnScreen;
@property (nonatomic) BOOL collectionViewHasScrolled;
@property (nonatomic) unsigned long long targetCardType;
@property (nonatomic) BOOL forceShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showHint;
- (void)popoverWillAppear;
- (BOOL)canShowPopover;
- (void)refreshUserModel:(id)a0;
- (void)cardDataSourceDidRefresh;
- (unsigned long long)hintPriority;
- (BOOL)shouldShowHint;
- (void)showPopoverWithCardController:(id)a0;
- (void)showPopoverOnCard:(id)a0 cardType:(unsigned long long)a1 needForce:(BOOL)a2 completionBlock:(id /* block */)a3;
- (void)popoverShowDidFail;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear;

@end
