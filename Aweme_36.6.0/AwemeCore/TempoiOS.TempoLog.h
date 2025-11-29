@class NSString, _TtC8TempoiOS10TempoError, NSDictionary;

@interface TempoiOS.TempoLog : NSObject {
    void /* function */ tag;
    void /* function */ msg;
    void /* function */ params;
}

@property (nonatomic, readonly) NSString *tag;
@property (nonatomic, readonly) long long level;
@property (nonatomic, readonly) long long code;
@property (nonatomic, readonly) NSString *msg;
@property (nonatomic, retain) _TtC8TempoiOS10TempoError *error;
@property (nonatomic, copy) NSDictionary *params;

- (id)initWithTag:(id)a0 level:(long long)a1 code:(long long)a2 msg:(id)a3 params:(id)a4 error:(id)a5;
- (void).cxx_destruct;
- (id)init;

@end
