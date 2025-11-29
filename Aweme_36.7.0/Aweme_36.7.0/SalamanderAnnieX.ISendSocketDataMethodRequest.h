@class NSString;

@interface SalamanderAnnieX.ISendSocketDataMethodRequest : NSObject {
    void /* unknown type, empty encoding */ __rts_socketTaskID;
    void /* unknown type, empty encoding */ __rts_data;
    void /* unknown type, empty encoding */ __rts_dataType;
}

@property (nonatomic, copy) NSString *socketTaskID;
@property (nonatomic, copy) id data;
@property (nonatomic, copy) NSString *dataType;

- (id)init:(id)a0 :(id)a1 :(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
