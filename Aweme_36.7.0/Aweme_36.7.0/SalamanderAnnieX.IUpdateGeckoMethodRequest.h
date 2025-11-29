@class NSString;

@interface SalamanderAnnieX.IUpdateGeckoMethodRequest : NSObject {
    void /* unknown type, empty encoding */ __rts_accessKey;
    void /* unknown type, empty encoding */ __rts_channel;
    void /* unknown type, empty encoding */ __rts_enableDownloadAutoRetry;
}

@property (nonatomic, copy) NSString *accessKey;
@property (nonatomic, copy) NSString *channel;
@property (nonatomic) BOOL enableDownloadAutoRetry;

- (id)init:(id)a0 :(id)a1 :(BOOL)a2;
- (void).cxx_destruct;
- (id)init;

@end
