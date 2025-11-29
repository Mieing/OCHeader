@class NSString;

@interface IESLiveSendGiftSchemaParser : NSObject <IESLiveSchemaParser>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_schema;

- (void)handleSchemeWithModel:(id)a0 fromInside:(BOOL)a1 completion:(id /* block */)a2;
- (id)roomService;
- (BOOL)p_isVsModule;
- (BOOL)p_isVSRoom;
- (void)p_parserFansGroupWithParamters:(id)a0;
- (void)p_parserSendGiftWithParamters:(id)a0;

@end
