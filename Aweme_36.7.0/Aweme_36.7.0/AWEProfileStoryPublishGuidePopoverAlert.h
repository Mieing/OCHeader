@class NSString, AFDFrequencyExitRule, AWEProfileStoryPublishGuidePopoverAlertConfig;
@protocol AWEProfileGuidePopoverHelperProtocol;

@interface AWEProfileStoryPublishGuidePopoverAlert : AWEProfileGuidePopoverBaseAlert <AWEProfileGuidePopoverHelperDelegate, AWEUserMessage>

@property (retain, nonatomic) id<AWEProfileGuidePopoverHelperProtocol> popoverHelper;
@property (retain, nonatomic) AFDFrequencyExitRule *exitRule;
@property (retain, nonatomic) AWEProfileStoryPublishGuidePopoverAlertConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)p_storyPublishConfig;
+ (id)sharedInstance;

- (void)popoverHelperDidInvokeOnclose:(id)a0;
- (void)p_showMateAlertIfNeededWithHostView:(id)a0 showCallback:(id /* block */)a1 dismissCallback:(id /* block */)a2;
- (void)showAlertIfNeededWithHostView:(id)a0 user:(id)a1;
- (BOOL)isCurrentTimeInTargetPeriods;
- (void).cxx_destruct;
- (id)init;

@end
