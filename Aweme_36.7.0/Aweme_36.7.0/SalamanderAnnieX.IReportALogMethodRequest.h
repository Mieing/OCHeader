@class NSString, _TtC16SalamanderAnnieX22ReportALogCodePosition;

@interface SalamanderAnnieX.IReportALogMethodRequest : NSObject {
    void /* unknown type, empty encoding */ __rts_level;
    void /* unknown type, empty encoding */ __rts_message;
    void /* unknown type, empty encoding */ __rts_tag;
    void /* unknown type, empty encoding */ __rts_codePosition;
}

@property (nonatomic, copy) NSString *level;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *tag;
@property (nonatomic, retain) _TtC16SalamanderAnnieX22ReportALogCodePosition *codePosition;

- (id)init:(id)a0 :(id)a1 :(id)a2 :(id)a3;
- (void).cxx_destruct;
- (id)init;

@end
