@protocol BDChainLogTokenBridgeProtocol;

@interface BDChainLogToken : BDChainLogBase

@property (retain, nonatomic) id<BDChainLogTokenBridgeProtocol> wrappee;
@property (readonly, copy, nonatomic) id /* block */ end;

- (id)initWithWrappee:(id)a0;
- (void).cxx_destruct;

@end
