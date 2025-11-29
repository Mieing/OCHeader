@class NSString;
@protocol IESLiveInteractiveFastMatchServiceProtocol;

@interface IESLiveFastMatchSchemaParser : IESLiveRoomSchemaBaseParser <IESLiveSchemaParser>

@property (retain, nonatomic) id<IESLiveInteractiveFastMatchServiceProtocol> api;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_schema;

- (void)handleSchemeWithModel:(id)a0 fromInside:(BOOL)a1 completion:(id /* block */)a2;
- (void)p_toastFatchFailed;
- (void)p_toastLoginFailed;
- (void)p_enterRoomWithModel:(id)a0 completion:(id /* block */)a1;
- (id)handleFastMatchRespWithModel:(id)a0 resp:(id)a1;
- (void).cxx_destruct;

@end
