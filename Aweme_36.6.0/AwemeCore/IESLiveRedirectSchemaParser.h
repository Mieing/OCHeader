@class NSString;
@protocol IESLiveURLSchemaHandler;

@interface IESLiveRedirectSchemaParser : NSObject <IESLiveSchemaParser>

@property (retain, nonatomic) id<IESLiveURLSchemaHandler> schemaHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_schema;

- (void)reportStatusWith:(id)a0 category:(id)a1 extra:(id)a2;
- (void)reportFailWith:(id)a0 category:(id)a1 extra:(id)a2;
- (id)dictFromQueryString:(id)a0;
- (void)handleSchemeWithModel:(id)a0 fromInside:(BOOL)a1 completion:(id /* block */)a2;
- (void)parseWithParams:(id)a0 fromInside:(BOOL)a1 completion:(id /* block */)a2;
- (void)handleSchemeFromConfigWithModel:(id)a0 fromInside:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)isWebcastUrl:(id)a0;
- (void)transToRealSchemeWith:(id)a0 parserParams:(id)a1;
- (id)generateURLWithSchema:(id)a0 parserParams:(id)a1;
- (void).cxx_destruct;

@end
