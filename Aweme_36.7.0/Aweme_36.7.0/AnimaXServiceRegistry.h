@class AnimaXServiceScope, NSMutableDictionary;

@interface AnimaXServiceRegistry : NSObject

@property (retain, nonatomic) NSMutableDictionary *services;
@property (readonly, nonatomic) AnimaXServiceScope *scope;

- (void)registerService:(id)a0 withImpl:(id)a1;
- (void).cxx_destruct;
- (id)initWithScope:(id)a0;
- (void)unregisterService:(id)a0;
- (id)getService:(id)a0;
- (void)releaseAll;

@end
