@protocol BDECRabbiFlyIInitAdapter;

@interface BDECRabbiFlyKit : NSObject

@property (retain, nonatomic) id<BDECRabbiFlyIInitAdapter> adapter;

- (id)createDynamicSupervisorWithConfig:(id)a0;
- (id)initWithInitAdapter:(id)a0;
- (void).cxx_destruct;

@end
