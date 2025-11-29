@interface BDECRabbiFlyWeakReference : NSObject

@property (weak, nonatomic) id target;

- (void).cxx_destruct;
- (id)initWithTarget:(id)a0;

@end
