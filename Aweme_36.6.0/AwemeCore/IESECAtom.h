@interface IESECAtom : NSObject

@property (retain, nonatomic) id object;

+ (id)atomWithObject:(id)a0;

- (id)observeUsingBlock:(id /* block */)a0 withOwner:(id)a1;
- (void).cxx_destruct;
- (id)initWithObject:(id)a0;

@end
