@class NSString;
@protocol AWEHPChannelControllerProtocol;

@interface AWEHPBottomEditBubblePluginController : NSObject <AWEHPChannelPluginControllerMultiInstanceProtocol>

@property (weak, nonatomic) id<AWEHPChannelControllerProtocol> channelController;
@property (copy, nonatomic) NSString *topTipBubbleText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)allowInjectToChannel:(id)a0;

- (void)channelTopTabContainerDidAppear;
- (void)topTabScrollDidReachStableEnd;
- (id)bubbleComponentID;
- (void)p_tryShowBubble;
- (void).cxx_destruct;
- (id)initWithChannel:(id)a0;

@end
