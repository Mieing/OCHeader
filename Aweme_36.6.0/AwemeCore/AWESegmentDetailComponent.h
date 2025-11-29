@class NSString, DUXPopover, AWERLSegmentView;

@interface AWESegmentDetailComponent : AWEUserDetailBaseComponent <AWESegmentDetailComponentProtocol>

@property (weak, nonatomic) DUXPopover *popover;
@property (retain, nonatomic) AWERLSegmentView *segmentView;
@property (nonatomic) unsigned long long cornerStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)checkCanShowPopover;
- (void)onTabList:(id)a0 didScroll:(struct CGPoint { double x0; double x1; })a1;
- (void)onDidRequestUser:(id)a0 error:(id)a1;
- (void)createPopoverProfileTabType:(long long)a0 content:(id)a1 popoverBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (void)onInit;

@end
