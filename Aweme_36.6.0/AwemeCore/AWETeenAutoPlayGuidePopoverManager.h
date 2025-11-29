@class NSString, DUXPopover, UIView;

@interface AWETeenAutoPlayGuidePopoverManager : NSObject <AWEAlertProtocol, DUXPopoverDelegate>

@property (retain, nonatomic) DUXPopover *guidePopover;
@property (nonatomic) BOOL guidePopoverHasShown;
@property (nonatomic) BOOL isPopoverShowing;
@property (weak, nonatomic) UIView *target;
@property (copy, nonatomic) id /* block */ onCloseAlert;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (void)showWithCloseCallback:(id /* block */)a0;
- (void)popoverDidDisappear:(id)a0;
- (void)dismissPopoverIfNeeded;
- (void)loadGuidePopoverDataFromCache;
- (void)showTeenAutoPlayGuidePopover;
- (BOOL)p_checkGuidePopoverFreqControl;
- (void)p_updateAutoPlayGuidePopoverInfo;
- (void)tryToShowAutoPlayGuidePopoverWithTarget:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
