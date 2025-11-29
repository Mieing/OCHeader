@class NSString, NSHashTable;

@interface WCMegaNetTask : NSObject

@property (nonatomic) BOOL checkDisposable;
@property (retain, nonatomic) NSHashTable *disposbleTable;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ success;
@property (copy, nonatomic) id /* block */ fail;
@property (retain, nonatomic) id response;
@property (copy, nonatomic) NSString *error;

- (id)init;
- (id)onSuccess:(id /* block */)a0;
- (id)onFail:(id /* block */)a0;
- (id)disposeBy:(id)a0;
- (void)doResponse;
- (void).cxx_destruct;

@end
