@class NSString, NSMutableDictionary;

@interface SalamanderAnnieX.IReportADLogMethodRequest : NSObject {
    void /* unknown type, empty encoding */ __rts_label;
    void /* unknown type, empty encoding */ __rts_tag;
    void /* function */ refer;
    void /* function */ groupID;
    void /* function */ creativeID;
    void /* function */ logExtra;
}

@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *tag;
@property (nonatomic, copy) NSString *refer;
@property (nonatomic, copy) NSString *groupID;
@property (nonatomic, copy) NSString *creativeID;
@property (nonatomic, copy) NSString *logExtra;
@property (nonatomic, retain) NSMutableDictionary *extraParams;

- (id)init:(id)a0 :(id)a1 :(id)a2 :(id)a3 :(id)a4 :(id)a5 :(id)a6;
- (void).cxx_destruct;
- (id)init;

@end
