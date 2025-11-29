@class NSString;
@protocol IESLiveInternalRouter;

@interface IESLiveProfileSchemaParser : NSObject <IESLiveSchemaParser>

@property (retain, nonatomic) id<IESLiveInternalRouter> internalRouter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_schema;

- (void)handleSchemeWithModel:(id)a0 fromInside:(BOOL)a1 completion:(id /* block */)a2;
- (void)p_parseProfileWithParameter:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
