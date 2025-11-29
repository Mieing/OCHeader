@class NSString, HTSLiveNFA, HTSLiveNFAPattern;

@interface IESLivePECepPattern : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) HTSLiveNFA *astNFA;
@property (retain, nonatomic) HTSLiveNFAPattern *begin;
@property (nonatomic) long long type;
@property (nonatomic) long long scope;

- (id)initWithName:(id)a0 NFA:(id)a1;
- (void).cxx_destruct;

@end
