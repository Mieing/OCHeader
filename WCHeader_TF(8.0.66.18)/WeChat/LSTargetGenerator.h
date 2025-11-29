@interface LSTargetGenerator : NSObject

@property (nonatomic) unsigned int type;
@property (nonatomic) SEL sel;
@property (copy, nonatomic) id /* block */ block;

+ (id)createBySel:(SEL)a0;
+ (id)createByBlock:(id /* block */)a0;

- (id)init;
- (id)getTarget:(id)a0;
- (id)getTarget:(id)a0 withParams:(id)a1;
- (void).cxx_destruct;

@end
