@class NSString, NSMutableArray;

@interface WAJSVarInjectionTool : NSObject {
    NSMutableArray *_configArr;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *baseObjJsonStr;

- (id)init;
- (id)initWithName:(id)a0;
- (void)setBaseObjWithDict:(id)a0;
- (void)setBaseObjWithJson:(id)a0;
- (void)addVar:(id)a0 withNumber:(id)a1;
- (void)addVar:(id)a0 withBool:(BOOL)a1;
- (void)addVar:(id)a0 withString:(id)a1;
- (void)addVar:(id)a0 withDict:(id)a1;
- (void)addVar:(id)a0 withJson:(id)a1;
- (void)addVar:(id)a0 withObject:(id)a1;
- (id)getJSString;
- (void).cxx_destruct;

@end
