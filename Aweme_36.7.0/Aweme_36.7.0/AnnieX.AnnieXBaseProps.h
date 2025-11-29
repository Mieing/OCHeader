@class _TtC6AnnieX15AnnieXLynxProps, NSString, NSMutableDictionary, _TtC6AnnieX21AnnieXPlatformContext, _TtC6AnnieX21AnnieXCardSchemaProps;

@interface AnnieX.AnnieXBaseProps : NSObject {
    void /* unknown type, empty encoding */ __rts_bid;
    void /* unknown type, empty encoding */ __rts_engineType;
    void /* unknown type, empty encoding */ __rts_schema;
    void /* unknown type, empty encoding */ __rts_url;
    void /* unknown type, empty encoding */ __rts_sessionId;
    void /* unknown type, empty encoding */ __rts_containerId;
    void /* unknown type, empty encoding */ __rts_globalProps;
    void /* unknown type, empty encoding */ __rts_platformContext;
    void /* unknown type, empty encoding */ __rts_cardSchemaProps;
    void /* unknown type, empty encoding */ __rts_lynxProps;
}

@property (nonatomic, copy) NSString *bid;
@property (nonatomic) int engineType;
@property (nonatomic, copy) NSString *schema;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, copy) NSString *sessionId;
@property (nonatomic, copy) NSString *containerId;
@property (nonatomic, retain) NSMutableDictionary *globalProps;
@property (nonatomic, retain) _TtC6AnnieX21AnnieXPlatformContext *platformContext;
@property (nonatomic, retain) NSMutableDictionary *queryItems;
@property (nonatomic, retain) _TtC6AnnieX21AnnieXCardSchemaProps *cardSchemaProps;
@property (nonatomic, retain) _TtC6AnnieX15AnnieXLynxProps *lynxProps;

- (id)init:(id)a0 :(id)a1 :(id)a2 :(id)a3 :(id)a4 :(id)a5 :(id)a6 :(id)a7;
- (void).cxx_destruct;
- (id)init;

@end
