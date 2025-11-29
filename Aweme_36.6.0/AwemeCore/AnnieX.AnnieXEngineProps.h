@class NSString, NSMutableDictionary, _TtC6AnnieX21AnnieXPlatformContext;

@interface AnnieX.AnnieXEngineProps : NSObject {
    void /* unknown type, empty encoding */ __rts_bid;
    void /* unknown type, empty encoding */ __rts_containerId;
    void /* unknown type, empty encoding */ __rts_schema;
    void /* unknown type, empty encoding */ __rts_url;
    void /* unknown type, empty encoding */ __rts_globalProps;
    void /* unknown type, empty encoding */ __rts_platformContext;
}

@property (nonatomic, copy) NSString *bid;
@property (nonatomic, copy) NSString *containerId;
@property (nonatomic, copy) NSString *schema;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, retain) NSMutableDictionary *queryItems;
@property (nonatomic, retain) NSMutableDictionary *globalProps;
@property (nonatomic, retain) _TtC6AnnieX21AnnieXPlatformContext *platformContext;

- (id)init:(id)a0 :(id)a1 :(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
