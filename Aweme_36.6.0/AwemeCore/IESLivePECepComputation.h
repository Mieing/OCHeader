@class IESLivePECepState, NSMutableArray;

@interface IESLivePECepComputation : NSObject

@property (retain, nonatomic) NSMutableArray *eventInfos;
@property (retain, nonatomic) IESLivePECepState *beginState;
@property (retain, nonatomic) IESLivePECepState *currentState;

- (void).cxx_destruct;
- (id)initWith:(id)a0;

@end
