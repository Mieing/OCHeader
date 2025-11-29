@class NSString;
@protocol AWEHPLandingStrategyModelProtocol;

@interface AWEHPCommonLandingStrategy : NSObject <AWEHPLandingStrategyProtocol>

@property (retain, nonatomic) id<AWEHPLandingStrategyModelProtocol> strategyModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
