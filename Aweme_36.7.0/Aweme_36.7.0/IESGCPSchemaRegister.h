@class NSArray, NSString;

@interface IESGCPSchemaRegister : NSObject <IESGCPSchemaInterface>

@property (retain, nonatomic) NSArray *parserClassArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getViewControllerWithSchema:(id)a0 params:(id)a1;
- (void)openSchema:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (id)supportedSchemaList;
- (id)schemaWithParserClass:(Class)a0;
- (id)findParserWithSchema:(id)a0;
- (void).cxx_destruct;

@end
