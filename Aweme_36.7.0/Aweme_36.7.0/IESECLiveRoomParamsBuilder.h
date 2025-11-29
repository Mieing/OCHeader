@class NSString;

@interface IESECLiveRoomParamsBuilder : NSObject <IESECLiveRoomParamsHandleProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ecomLiveParamsFromRoomContextParams:(id)a0;
+ (id)p_validatePassthroughLogData:(id)a0 fixExtraBusiness:(BOOL)a1 originRoomParams:(id)a2;
+ (void)p_refillEComLiveParams:(id)a0;
+ (id)p_validateEComLiveParams:(id)a0;
+ (id)jumpSchemaFromEComLiveParams:(id)a0;
+ (void)p_filterEcomLiveParams:(id)a0;
+ (id)p_passthroughParamsForOpenPageFromEComLiveParms:(id)a0;
+ (id)p_jumpSchemaWithType:(unsigned long long)a0 productID:(id)a1 promotionID:(id)a2 passthroughParams:(id)a3;
+ (id)p_schemaWithHost:(id)a0 path:(id)a1 originParams:(id)a2;
+ (id)p_removeAndReturnExtraBusinessParams:(id)a0 originRoomParams:(id)a1;
+ (id)p_removePassthroughLogDataSensitiveParams:(id)a0;
+ (id)validateRoomParamsBeforeEnter:(id)a0;
+ (id)queryDictWithEscapes:(BOOL)a0 fromSchema:(id)a1;


@end
