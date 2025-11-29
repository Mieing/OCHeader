@class NSString;
@protocol AWEUndertakeStrategyProtocol;

@interface AWEUndertakeFilterBaseCondition : NSObject <AWEUndertakeFilterConditionProtocol>

@property (weak, nonatomic) id<AWEUndertakeStrategyProtocol> strategy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
