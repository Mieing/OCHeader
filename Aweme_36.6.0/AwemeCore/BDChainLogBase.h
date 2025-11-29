@protocol BDChainLogBaseBridgeProtocol;

@interface BDChainLogBase : NSObject

@property (retain, nonatomic) id<BDChainLogBaseBridgeProtocol> wrappee;
@property (readonly, copy, nonatomic) id /* block */ addr;
@property (readonly, copy, nonatomic) id /* block */ msg;
@property (readonly, copy, nonatomic) id /* block */ tag;
@property (readonly, copy, nonatomic) id /* block */ add;
@property (readonly, copy, nonatomic) id /* block */ toWarn;
@property (readonly, copy, nonatomic) id /* block */ toError;
@property (readonly, copy, nonatomic) id /* block */ assertIt;
@property (readonly, copy, nonatomic) id /* block */ track;

- (void).cxx_destruct;

@end
