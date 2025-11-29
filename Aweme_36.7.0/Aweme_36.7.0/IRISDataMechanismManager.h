@class IRISDataMechanismIMPL;

@interface IRISDataMechanismManager : NSObject

@property (retain, nonatomic) IRISDataMechanismIMPL *mechanismP0;
@property (retain, nonatomic) IRISDataMechanismIMPL *mechanismP1;
@property (retain, nonatomic) IRISDataMechanismIMPL *mechanismP2;

- (id)mechanismForLevel:(long long)a0;
- (void).cxx_destruct;
- (void)apply:(id)a0;
- (id)init;

@end
