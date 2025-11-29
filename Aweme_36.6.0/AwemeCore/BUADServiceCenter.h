@class BUADServiceBuilder;

@interface BUADServiceCenter : NSObject

@property (retain, nonatomic) BUADServiceBuilder *builder;

+ (id)defaultCenter;

- (id)getObject:(id)a0 name:(id)a1;
- (void)loadDefaultModules;
- (id)getObjectWithArgs:(id)a0;
- (id)getObject:(id)a0 nameWithArgs:(id)a1;
- (void).cxx_destruct;
- (void)setupData;
- (id)getObject:(id)a0;

@end
