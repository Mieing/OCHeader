@class NSDictionary, NSString, IESPrefetchFlatSchema;

@interface IESPrefetchTemplateInput : NSObject <IESPrefetchTemplateInput>

@property (copy, nonatomic) NSDictionary *variables;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) IESPrefetchFlatSchema *schema;
@property (copy, nonatomic) NSString *traceId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
