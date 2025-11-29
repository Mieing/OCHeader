@class NSString;

@interface HTSFormatEnterRoomSchemaParse : NSObject <IESLiveSchemaParser>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_schema;

- (void)handleSchemeWithModel:(id)a0 fromInside:(BOOL)a1 completion:(id /* block */)a2;
- (void)enterFormatRoomWithParams:(id)a0;
- (void)parseGeneralSearchParams:(id)a0 formatAisle:(id)a1;
- (void)parseIMChatListParams:(id)a0 formatAisle:(id)a1;
- (void)parseExtraParams:(id)a0 formatAisle:(id)a1;

@end
