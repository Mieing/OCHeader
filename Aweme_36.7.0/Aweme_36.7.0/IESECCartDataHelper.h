@class NSDictionary;

@interface IESECCartDataHelper : NSObject

@property (nonatomic) unsigned long long nextSendVersion;
@property (nonatomic) unsigned long long maxReceivedVersion;
@property (nonatomic) unsigned long long maxSuccessVersion;
@property (retain, nonatomic) id protocolSnapshot;
@property (copy, nonatomic) NSDictionary *lastestSuccessResponse;

- (unsigned long long)getNextSendVersion;
- (unsigned long long)increaseSendVersion;
- (void)updateMaxSuccessVersion:(unsigned long long)a0 lastestSuccessResponse:(id)a1;
- (void)initWithCachedResponse:(id)a0;
- (void)updateProtocolSnapshot:(id)a0;
- (BOOL)handleCartWithYataInstance:(id)a0 httpResponse:(id)a1 requestParams:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;

@end
