@class NSError;

@interface Result : NSObject

@property (nonatomic) long long type;
@property (retain, nonatomic) id ok;
@property (retain, nonatomic) NSError *err;

+ (id)err:(id)a0;
+ (id)ok:(id)a0;
+ (id)resultWithType:(long long)a0 ok:(id)a1 err:(id)a2;

- (void)inspect:(id /* block */)a0;
- (void)inspectErr:(id /* block */)a0;
- (id)andThen:(id /* block */)a0;
- (void).cxx_destruct;

@end
