@class NSString;
@protocol AWEPzStrategyConfigProtocol;

@interface AWEPzDownGradeLimitStrategy : NSObject <AWEPzStrategyProtocol, AWEPzDownGradeProtocol>

@property (retain, nonatomic) id<AWEPzStrategyConfigProtocol> configModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
