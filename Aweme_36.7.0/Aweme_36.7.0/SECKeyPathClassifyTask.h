@class NSArray, NSString, SECYcavClassifyResult;

@interface SECKeyPathClassifyTask : NSObject

@property (copy, nonatomic) NSArray *classifiers;
@property (retain, nonatomic) id target;
@property (copy, nonatomic) NSString *keyPath;
@property (retain, nonatomic) SECYcavClassifyResult *classifyResult;
@property (nonatomic) unsigned long long depth;
@property (nonatomic) unsigned long long maxDepth;

- (void)runWithArray:(id)a0;
- (void)runWithDict:(id)a0;
- (void)runWithString:(id)a0;
- (id)appendPath:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)runWithData:(id)a0;
- (void)run;

@end
