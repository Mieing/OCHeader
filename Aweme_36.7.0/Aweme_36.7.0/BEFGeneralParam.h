@interface BEFGeneralParam : NSObject

+ (void)setHeaderCallback:(id /* block */)a0;
+ (void)setCheckUrlCallback:(id /* block */)a0;
+ (void)setParamCallback:(id /* block */)a0;
+ (void)setParam:(id)a0 withKey:(id)a1;
+ (id)getParamByKey:(id)a0;
+ (void)setParams:(id)a0;

- (id)init;

@end
