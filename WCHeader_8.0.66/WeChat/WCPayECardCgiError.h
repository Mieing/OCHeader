@class PopItem;

@interface WCPayECardCgiError : WCPayBaseNetworkingError

@property (retain, nonatomic) PopItem *popItem;

- (id)initWithErrorCode:(unsigned int)a0 errorMsg:(id)a1 popItem:(id)a2;
- (id)description;
- (void).cxx_destruct;

@end
