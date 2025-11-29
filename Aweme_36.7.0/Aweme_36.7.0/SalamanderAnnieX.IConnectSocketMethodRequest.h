@class NSString, NSMutableDictionary, NSMutableArray;

@interface SalamanderAnnieX.IConnectSocketMethodRequest : NSObject {
    void /* unknown type, empty encoding */ __rts_url;
    void /* function */ preferredReceivedDataType;
}

@property (nonatomic, copy) NSString *url;
@property (nonatomic, retain) NSMutableDictionary *header;
@property (nonatomic, retain) NSMutableArray *protocols;
@property (nonatomic, copy) NSString *preferredReceivedDataType;

- (id)init:(id)a0 :(id)a1 :(id)a2 :(id)a3;
- (void).cxx_destruct;
- (id)init;

@end
