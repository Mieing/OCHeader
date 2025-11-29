@class MMLiveFlowActionBase;

@interface MMLiveFlowDownstreamActionDescriptor : NSObject

@property (copy, nonatomic) id /* block */ actionFactory;
@property (readonly, nonatomic) MMLiveFlowActionBase *action;

+ (id)createWithActionClass:(Class)a0;
+ (id)createWithActionInstance:(id)a0;
+ (id)createWithActionFactory:(id /* block */)a0;

- (void).cxx_destruct;

@end
