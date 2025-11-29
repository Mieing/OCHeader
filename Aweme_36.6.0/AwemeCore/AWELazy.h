@interface AWELazy : NSObject

@property (copy, nonatomic) id /* block */ constructor;
@property (retain, nonatomic) id strongValue;
@property (weak, nonatomic) id weakValue;
@property (readonly, nonatomic) id value;

- (id)initWithConstrcutor:(id /* block */)a0 attributes:(struct { BOOL x0; BOOL x1; })a1;
- (id)initWithConstrcutor:(id /* block */)a0;
- (void).cxx_destruct;
- (id)value;

@end
