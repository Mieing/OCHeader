@class NSString, NSMutableArray;

@interface CJPayDirectBankManager : NSObject <CJPayDirectBankModule>

@property (retain, nonatomic) NSMutableArray *mutableControllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerComponents;
+ (id)defaultService;

- (void)startDirectBankWithParams:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
