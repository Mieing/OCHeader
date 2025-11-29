@class NSString;

@interface TempoMethod : NSObject <TempoMethod>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) id /* block */ impl;
@property (nonatomic) unsigned long long options;
@property (readonly, nonatomic) BOOL isGlobal;
@property (readonly, nonatomic) BOOL isPrototype;
@property (readonly, nonatomic) BOOL isProperty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithName:(id)a0 impl:(id /* block */)a1 options:(unsigned long long)a2;
- (id)invokeWithArgs:(id)a0 context:(id)a1 error:(id *)a2;
- (BOOL)isProperty;
- (BOOL)doesMatchOptions:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)isPrototype;
- (BOOL)isGlobal;

@end
