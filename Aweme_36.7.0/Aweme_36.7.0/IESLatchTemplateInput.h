@class NSDictionary, NSString, IESLatchFlatSchema;

@interface IESLatchTemplateInput : NSObject <IESLatchTemplateInput>

@property (copy, nonatomic) NSDictionary *variables;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) IESLatchFlatSchema *schema;
@property (copy, nonatomic) NSString *traceId;
@property (retain, nonatomic) NSDictionary *globalProps;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
