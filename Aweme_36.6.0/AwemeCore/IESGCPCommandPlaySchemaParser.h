@class NSString, IESGCPApi;

@interface IESGCPCommandPlaySchemaParser : NSObject <IESGCPSchemaParser>

@property (retain, nonatomic) IESGCPApi *api;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)formatReqParams:(id)a0 launchStatus:(BOOL)a1 scheme:(id)a2;
+ (void)reportEnterGame:(id)a0 scheme:(id)a1 isSuccess:(BOOL)a2;
+ (id)schema;

- (void)handleSchemaWithParams:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
