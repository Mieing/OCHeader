@class NSString;
@protocol YataInstanceInnerInterface;

@interface YataEventChainExpression : NSObject <EventChainExprService>

@property (weak, nonatomic) id<YataInstanceInnerInterface> yata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
