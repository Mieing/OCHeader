@class NSString, Element;

@interface Attr : Node

@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL specified;
@property (retain, nonatomic) NSString *value;
@property (retain, nonatomic) Element *ownerElement;

- (id)initWithNamespace:(id)a0 qualifiedName:(id)a1 value:(id)a2;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 value:(id)a1;

@end
