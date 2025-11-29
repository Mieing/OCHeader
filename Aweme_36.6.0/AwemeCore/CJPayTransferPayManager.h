@class NSString, NSMutableArray;

@interface CJPayTransferPayManager : NSObject <CJPayTransferPayModule>

@property (retain, nonatomic) NSMutableArray *mutableControllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerComponents;
+ (id)defaultService;

- (void)startTransferPayWithParams:(id)a0 completion:(id /* block */)a1;
- (void)startPublicTransferPayWithParams:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
