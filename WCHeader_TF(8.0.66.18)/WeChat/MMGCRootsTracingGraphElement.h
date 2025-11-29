@class NSArray, NSString, MMGCRootsTracingGraphConfiguration;

@interface MMGCRootsTracingGraphElement : NSObject

@property (readonly, copy, nonatomic) NSArray *namePath;
@property (weak, nonatomic) id object;
@property (readonly, nonatomic) MMGCRootsTracingGraphConfiguration *configuration;
@property (retain, nonatomic) NSString *lastClassName;
@property (nonatomic) BOOL isAppSymbol;

- (id)initWithObject:(id)a0;
- (id)initWithObject:(id)a0 configuration:(id)a1;
- (id)initWithObject:(id)a0 configuration:(id)a1 namePath:(id)a2;
- (id)allRetainedObjects;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (unsigned long long)objectAddress;
- (id)classNameOrNull;
- (Class)objectClass;
- (void).cxx_destruct;

@end
