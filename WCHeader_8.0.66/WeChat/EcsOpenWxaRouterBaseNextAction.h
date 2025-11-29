@class NSString;

@interface EcsOpenWxaRouterBaseNextAction : NSObject

@property (readonly, nonatomic) NSString *name;

+ (id)createWithName:(id)a0;

- (id)initWithName:(id)a0;
- (void)handleWithActionData:(id)a0 jumpInfo:(id)a1 context:(id)a2;
- (void).cxx_destruct;

@end
