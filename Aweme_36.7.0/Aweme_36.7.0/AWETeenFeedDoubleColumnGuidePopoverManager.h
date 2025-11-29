@class NSString, DUXPopover, NSDate;

@interface AWETeenFeedDoubleColumnGuidePopoverManager : NSObject <AWEAlertProtocol, DUXPopoverDelegate, AWETeenFeedDoubleColumnMessage>

@property (retain, nonatomic) DUXPopover *guidePopover;
@property (nonatomic) long long guidePopoverShowTimes;
@property (retain, nonatomic) NSDate *guidePopoverLastShowTime;
@property (nonatomic) BOOL isPopoverShowing;
@property (copy, nonatomic) id /* block */ onCloseAlert;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (BOOL)canShow;
- (void)showWithCloseCallback:(id /* block */)a0;
- (void)popoverDidDisappear:(id)a0;
- (void)dismissPopoverIfNeeded;
- (BOOL)enableTeenDoubleColumn;
- (void)loadGuidePopoverDataFromCache;
- (BOOL)p_checkGuidePopoverFreqControl;
- (void)tryToShowDoubleColumnGuidePopover;
- (long long)maxGuidePopoverShowTimes;
- (void)showTeenDoubleColumnGuidePopover;
- (void)p_updateDoubleColumnGuidePopoverInfo;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
