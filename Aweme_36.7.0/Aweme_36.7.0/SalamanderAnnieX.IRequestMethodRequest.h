@class NSString;

@interface SalamanderAnnieX.IRequestMethodRequest : NSObject {
    void /* unknown type, empty encoding */ __rts_url;
    void /* unknown type, empty encoding */ __rts_method;
    void /* function */ body;
    void /* function */ params;
    void /* function */ header;
    void /* unknown type, empty encoding */ useUIThread;
    void /* unknown type, empty encoding */ addCommonParams;
    void /* unknown type, empty encoding */ usePrefetch;
    void /* unknown type, empty encoding */ isCustomizedCookie;
    void /* unknown type, empty encoding */ streamLoadType;
    void /* function */ streamSessionId;
    void /* unknown type, empty encoding */ bodyType;
    void /* unknown type, empty encoding */ maxLength;
}

@property (nonatomic, copy) NSString *url;
@property (nonatomic, copy) NSString *method;
@property (nonatomic, copy) id body;
@property (nonatomic, copy) id params;
@property (nonatomic, copy) id header;
@property (nonatomic, copy) NSString *streamSessionId;

- (void).cxx_destruct;
- (id)init;

@end
