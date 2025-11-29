@class NSString, AWEPzStrategyModel;
@protocol AWEPzStrategyAbility;

@interface AWEPzStrategyConfig : NSObject <AWEPzStrategyConfigProtocol>

@property (retain, nonatomic) AWEPzStrategyModel *model;
@property (retain, nonatomic) id<AWEPzStrategyAbility> ability;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
