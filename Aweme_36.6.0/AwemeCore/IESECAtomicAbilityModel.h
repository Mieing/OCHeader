@class Protocol;

@interface IESECAtomicAbilityModel : NSObject

@property (retain, nonatomic) Protocol *serviceProtocol;
@property (nonatomic) SEL actionSEL;

- (id)initWithProtocol:(id)a0 selectorSEL:(SEL)a1;
- (void).cxx_destruct;

@end
