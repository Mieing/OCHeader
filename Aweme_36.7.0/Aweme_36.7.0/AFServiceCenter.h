@class NSMutableDictionary, NSDate;

@interface AFServiceCenter : NSObject

@property (retain, nonatomic) NSDate *lastCallDate;
@property (retain, nonatomic) NSMutableDictionary *tasks;

+ (void)callService:(unsigned long long)a0 withParams:(id)a1 andCompletion:(id /* block */)a2;
+ (void)handleResponseURL:(id)a0 withCompletion:(id /* block */)a1;
+ (BOOL)handleOpenUniversalLink:(id)a0 withCompletion:(id /* block */)a1;
+ (id)bizNameByService:(unsigned long long)a0;
+ (id)shared;

- (void)callService:(unsigned long long)a0 withParams:(id)a1 andCompletion:(id /* block */)a2;
- (void)handleResponseURL:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)checkIfRepeat;
- (id)findTaskWithSession:(id)a0;
- (void).cxx_destruct;

@end
