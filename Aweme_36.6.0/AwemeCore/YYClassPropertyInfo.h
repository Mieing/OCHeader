@class NSString, NSArray;

@interface YYClassPropertyInfo : NSObject

@property (readonly, nonatomic) struct objc_property { } *property;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *typeEncoding;
@property (readonly, nonatomic) NSString *ivarName;
@property (readonly, nonatomic) Class cls;
@property (readonly, nonatomic) NSArray *protocols;
@property (readonly, nonatomic) SEL getter;
@property (readonly, nonatomic) SEL setter;

- (void).cxx_destruct;
- (id)initWithProperty:(struct objc_property { } *)a0;

@end
