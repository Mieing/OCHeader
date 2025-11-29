@class NSString;

@interface GHNSObjectProperty : NSObject

@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL dynamic;
@property (nonatomic) Class cls;
@property (nonatomic) SEL setter;
@property (nonatomic) SEL getter;
@property (nonatomic) void /* function */ *setterImpl;
@property (nonatomic) void /* function */ *getterImpl;

- (void)_setupType:(const char *)a0;
- (id)initWithProperty:(struct objc_property { } *)a0 class:(Class)a1;
- (void).cxx_destruct;

@end
