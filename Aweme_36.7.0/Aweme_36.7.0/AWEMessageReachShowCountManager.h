@class NSDictionary, NSString;
@protocol AWEMessageReachInternalAbilityProtocol;

@interface AWEMessageReachShowCountManager : NSObject <AWEMessageReachShowCountInnerAbilityProtocol>

@property (weak, nonatomic) id<AWEMessageReachInternalAbilityProtocol> config;
@property (copy, nonatomic) NSDictionary *bizStrategyConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
