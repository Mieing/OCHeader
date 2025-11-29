@class NSString, HTSLiveNFAPattern, NSDictionary;

@interface IESLivePECepState : NSObject

@property (nonatomic) double createTimeS;
@property (retain, nonatomic) HTSLiveNFAPattern *astState;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long withinType;
@property (nonatomic) long long matchCount;
@property (retain, nonatomic) IESLivePECepState *previous;
@property (nonatomic) long long type;
@property (nonatomic) BOOL canGotoNext;
@property (retain, nonatomic) NSDictionary *context;

- (BOOL)isFinalState;
- (BOOL)isStopState;
- (void).cxx_destruct;
- (id)initWith:(id)a0;

@end
