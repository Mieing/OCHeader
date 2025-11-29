@class NSString;
@protocol AWEMessageReachFrameAbilityProtocol;

@interface AWEMessageReachFrameConfig : NSObject <AWEMessageReachFrameConfigProtocol>

@property (nonatomic) BOOL isBottomChannel;
@property (retain, nonatomic) id<AWEMessageReachFrameAbilityProtocol> messageReachFrameAbility;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrameAbility:(id)a0 isBottomChannel:(BOOL)a1;
- (void).cxx_destruct;

@end
