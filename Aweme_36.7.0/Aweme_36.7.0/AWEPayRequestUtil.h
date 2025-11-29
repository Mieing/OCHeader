@interface AWEPayRequestUtil : NSObject

+ (id)getWithURLString:(id)a0 params:(id)a1 modelClass:(Class)a2 completion:(id /* block */)a3;
+ (void)p_monitorNetWorkWithUrlStr:(id)a0 duration:(double)a1 model:(id)a2 error:(id)a3;
+ (void)p_trackWithEvent:(id)a0 params:(id)a1;

@end
