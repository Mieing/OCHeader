@class NSString, NSMutableDictionary;

@interface SalamanderAnnieX.IOpenMethodRequest : NSObject {
    void /* unknown type, empty encoding */ __rts_schema;
    void /* unknown type, empty encoding */ __rts_replace;
    void /* unknown type, empty encoding */ __rts_firstClose;
    void /* unknown type, empty encoding */ __rts_useSysBrowser;
    void /* unknown type, empty encoding */ __rts_replaceType;
    void /* unknown type, empty encoding */ asyncCheckOpen;
}

@property (nonatomic, copy) NSString *schema;
@property (nonatomic) BOOL replace;
@property (nonatomic) BOOL firstClose;
@property (nonatomic) BOOL useSysBrowser;
@property (nonatomic, copy) NSString *replaceType;
@property (nonatomic, retain) NSMutableDictionary *extra;

- (void).cxx_destruct;
- (id)init;

@end
