@class NSString;
@protocol AWEIMMangoRedPacketIncentiveTipDisplayManagerProtocol;

@interface AWEIMMixMangoRedPacketIncentiveManager : NSObject <AWEIMMixMangoRedPacketIncentiveProtocol>

@property (retain, nonatomic) id<AWEIMMangoRedPacketIncentiveTipDisplayManagerProtocol> mangoRedPacketIncentiveTipDisplayManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)redPacketIncentiveTipView;
- (void)updateRedPacketIncentiveTipView;
- (void)trackDidClickButton;
- (void)mangoRedPacketIncentiveTipDisplayManagerWithConversationID:(id)a0 enterFrom:(id)a1;
- (void).cxx_destruct;
- (void)dismissViewController;

@end
