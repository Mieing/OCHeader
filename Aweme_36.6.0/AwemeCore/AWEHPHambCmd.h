@class NSString, NSArray;

@interface AWEHPHambCmd : NSObject

@property (readonly, copy, nonatomic) NSString *path;
@property (readonly, copy, nonatomic) NSArray *nodes;

+ (id)p_generateNodesWithPath:(id)a0;
+ (id)p_generatePathWithNames:(id)a0;
+ (id)p_generatePathWithNodes:(id)a0;
+ (id)cmdWithPath:(id)a0;
+ (id)cmdWithNames:(id)a0;
+ (id)cmdWithNodes:(id)a0;

- (id)initWithNodes:(id)a0 path:(id)a1;
- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;

@end
