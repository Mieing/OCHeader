@class NSString, AWEUserProtocolBubbleConfig, NSDictionary;
@protocol AWEUserProtocolBubbleAdapterDelegate;

@interface AWEUserProtocolBubbleAdapter : NSObject <DUXPopoverDelegate>

@property (copy, nonatomic) NSString *bubbleText;
@property (copy, nonatomic) NSString *autoBubbleText;
@property (nonatomic) double delayTime;
@property (nonatomic) BOOL isAppear;
@property (nonatomic) BOOL bubbleIsShowing;
@property (nonatomic) BOOL hasShowBubble;
@property (weak, nonatomic) id<AWEUserProtocolBubbleAdapterDelegate> delegate;
@property (retain, nonatomic) AWEUserProtocolBubbleConfig *config;
@property (nonatomic) BOOL isInInputView;
@property (nonatomic) BOOL isValidInput;
@property (nonatomic) BOOL enable;
@property (copy, nonatomic) NSDictionary *trackInfo;
@property (nonatomic) unsigned long long autoShowType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)popoverDidDisappear:(id)a0;
- (void)showBubble;
- (void)showBubbleWithText:(id)a0;
- (void)trackAutoShowBubble;
- (void)p_showBubbleWithConfig:(id)a0 addClick:(BOOL)a1 bubbleText:(id)a2;
- (void)p_autoShowBubble;
- (void)p_clickBubble;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidDisappear;

@end
