@class NSString;
@protocol BDChainLogBridgeProtocol;

@interface BDChainLog : BDChainLogBase

@property (class, copy, nonatomic) id /* block */ wrappeeClassBlock;

@property (retain, nonatomic) id<BDChainLogBridgeProtocol> wrappee;
@property (copy, nonatomic) NSString *fileName;
@property (copy, nonatomic) NSString *funcName;
@property (nonatomic) long long lineNumber;
@property (readonly, copy, nonatomic) id /* block */ host;
@property (readonly, copy, nonatomic) id /* block */ noGateway;
@property (readonly, copy, nonatomic) id /* block */ asyncFrom;
@property (readonly, copy, nonatomic) id /* block */ ok;
@property (readonly, copy, nonatomic) id /* block */ token;

+ (id)createWithType:(unsigned long long)a0 module:(id)a1 links:(id)a2 selfObj:(id)a3 message:(id)a4 fileName:(id)a5 funcName:(id)a6 lineNumber:(long long)a7;

- (id)initWithWrappee:(id)a0;
- (void).cxx_destruct;

@end
