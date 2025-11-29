@class NSString;

@interface STHookInfo : NSObject <STHookInfo> {
    BOOL automaticRemoval;
}

@property (nonatomic) SEL selector;
@property (copy, nonatomic) id block;
@property (nonatomic) long long options;
@property (weak, nonatomic) id object;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)infoWithSelector:(SEL)a0 object:(id)a1 options:(long long)a2 block:(id)a3 error:(id *)a4;

- (void).cxx_destruct;
- (BOOL)remove;

@end
