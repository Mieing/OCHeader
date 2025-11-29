@class NSString;

@interface IESGCPTeamPlayAudiencePanelSchemaParser : NSObject <IESGCPSchemaParser>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)schema;

- (void)loginIfNeededWithCompletion:(id /* block */)a0;
- (void)handleSchemaWithParams:(id)a0 completion:(id /* block */)a1;

@end
