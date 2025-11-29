@class NSArray, NSMutableDictionary, UATimer;

@interface UAServiceOperation : NSOperation

@property (copy, nonatomic) NSArray *classNames;
@property (retain, nonatomic) NSMutableDictionary *operationData;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) UATimer *timer;

+ (Class)networkClass;
+ (void)performServicesWithNames:(id)a0 type:(id)a1 completion:(id /* block */)a2;
+ (void)performServicesWithNames:(id)a0 type:(id)a1 data:(id)a2 completion:(id /* block */)a3;
+ (void)performServicesWithNames:(id)a0 completion:(id /* block */)a1;
+ (void)performLogServiceWithData:(id)a0 completion:(id /* block */)a1;
+ (void)performGetPhoneServiceCompletion:(id /* block */)a0;
+ (void)performLoginServiceForType:(id)a0 completion:(id /* block */)a1;

- (void)finishInMainForResult:(id)a0;
- (id)initWithServiceClassNames:(id)a0 data:(id)a1;
- (void).cxx_destruct;
- (void)cancelOperation;
- (void)dealloc;
- (void)main;

@end
