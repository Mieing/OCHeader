@class NSString, AWEIMMangoRedPacketIncentiveTipViewConfig, UIView;
@protocol IESIMConversationProtocol;

@interface AWEIMMangoRedPacketIncentiveTipDisplayManager : NSObject <AWEIMMangoRedPacketIncentiveTipDisplayManagerProtocol>

@property (retain, nonatomic) UIView *redPacketIncentiveTipView;
@property (retain, nonatomic) id<IESIMConversationProtocol> conversation;
@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) AWEIMMangoRedPacketIncentiveTipViewConfig *viewConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_trackEvent:(id)a0;
- (id)initWithConversation:(id)a0 enterFrom:(id)a1 scene:(unsigned long long)a2;
- (void)p_createAndBindView;
- (id)p_sceneActivityName;
- (void)updateRedPacketIncentiveTipView;
- (void)trackDidClickButton;
- (void).cxx_destruct;

@end
