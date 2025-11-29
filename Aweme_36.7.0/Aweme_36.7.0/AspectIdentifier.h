@class NSMethodSignature;

@interface AspectIdentifier : NSObject

@property (nonatomic) SEL selector;
@property (retain, nonatomic) id block;
@property (retain, nonatomic) NSMethodSignature *blockSignature;
@property (weak, nonatomic) id object;
@property (nonatomic) unsigned long long options;

+ (id)identifierWithSelector:(SEL)a0 object:(id)a1 options:(unsigned long long)a2 block:(id)a3 error:(id *)a4;

- (BOOL)invokeWithInfo:(id)a0;
- (void).cxx_destruct;
- (BOOL)remove;
- (id)description;

@end
