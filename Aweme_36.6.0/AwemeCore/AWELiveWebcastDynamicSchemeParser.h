@class _TtC16AWELiveSwiftImpl28AWELiveLiveDynamicViewLoader, NSString;

@interface AWELiveWebcastDynamicSchemeParser : NSObject <IESLiveSchemaParser>

@property (retain, nonatomic) _TtC16AWELiveSwiftImpl28AWELiveLiveDynamicViewLoader *liveDynamicViewLoader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_schema;

- (void)handleSchemeWithModel:(id)a0 fromInside:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
