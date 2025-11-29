@class NSDictionary;

@interface AWEEventContext : NSObject

@property (retain, nonatomic) AWEEventContext *baseContext;
@property (retain, nonatomic) NSDictionary *currentAttributes;
@property (readonly, nonatomic) NSDictionary *attributes;

+ (id)contextMakeAttributes:(id /* block */)a0;
+ (id)contextWithBaseContext:(id)a0;
+ (id)contextMakeBaseAttributes:(id /* block */)a0;
+ (id)contextWithContext:(id)a0;

- (id)makeAttributes:(id /* block */)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)updateAttributes:(id /* block */)a0;

@end
