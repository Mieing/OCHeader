@class NSString, NSMutableDictionary;

@interface IESECBaseSchemaBuilder : NSObject <IESECSchemaBuilder>

@property (retain, nonatomic) NSMutableDictionary *schemaQueryItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appendParams:(id)a0 toPath:(id)a1;
- (void)appendPassthrough:(id)a0 to:(id)a1 option:(unsigned long long)a2;
- (void)p_appendPassthroughForAdd:(id)a0 to:(id)a1;
- (void)p_appendPassthroughForMerge:(id)a0 to:(id)a1;
- (void).cxx_destruct;
- (id)build;

@end
