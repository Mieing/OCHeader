@class AWEBubble, AWEToolTipView, NSString;

@interface AWECampaignBubbleController : NSObject <AWECampaignBubbleControllerProtocol>

@property (retain, nonatomic) AWEBubble *tabbarCampaignBubble;
@property (retain, nonatomic) AWEToolTipView *toolTipView;
@property (nonatomic) BOOL shouldPostpone;
@property (nonatomic) BOOL hasEnteredIntoCampaignByNonProfileMeans;
@property (nonatomic) BOOL hasBlockByMeTab;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dismissBubble;
- (void)setupObservation;
- (void)presentMyTabCampaignBubbleImmediatelyIfNeeded;
- (void)presentMyTabCampaignBubbleWhenAvailable;
- (void)_presentMyTabCampaignBubbleImmediatelyIfNeeded;
- (void)presentBubbleOnReceivingBubbleData:(id)a0;
- (BOOL)presentBubbleWithTitle:(id)a0 image:(id)a1 andDuration:(double)a2;
- (BOOL)_presentBubbleWithTitle:(id)a0 image:(id)a1 andDuration:(double)a2;
- (void)_dismissBubble;
- (void).cxx_destruct;

@end
