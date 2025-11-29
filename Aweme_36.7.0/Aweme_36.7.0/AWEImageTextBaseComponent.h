@protocol AWEImageTextComponentManagerProtocol;

@interface AWEImageTextBaseComponent : NSObject

@property (weak, nonatomic) id<AWEImageTextComponentManagerProtocol> manager;

+ (BOOL)shouldCreateWithManager:(id)a0;

- (void)executeSelector:(SEL)a0 inProtocol:(id)a1 withArgs:(id)a2;
- (id)knowledge_PerformSelector:(SEL)a0 withObjects:(id)a1;
- (id)registerProtocol;
- (id)findBaseComponentWith:(id)a0;
- (id)sectionViewModel;
- (BOOL)shouldResponseToSelector:(SEL)a0 inProtocol:(id)a1;
- (void).cxx_destruct;
- (id)sectionController;
- (id)initWithManager:(id)a0;
- (id)handler;

@end
