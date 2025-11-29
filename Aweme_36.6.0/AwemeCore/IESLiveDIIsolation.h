@class NSSet;

@interface IESLiveDIIsolation : NSObject

@property (retain, nonatomic) NSSet *liveServices;
@property (retain, nonatomic) NSSet *diffServices;

- (BOOL)containService:(id)a0;
- (void).cxx_destruct;
- (id)filterWithServices:(id)a0;

@end
