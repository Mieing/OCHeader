@class NSString, AWERxModule;

@interface AWERxBaseStore : NSObject <AWERxStoreProtocol> {
    AWERxModule *_module;
}

@property (readonly, nonatomic) AWERxModule *module;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)dispatchAction:(id)a0 completion:(id /* block */)a1;
- (BOOL)setState:(id)a0 withValue:(id)a1 context:(id)a2;
- (BOOL)dispatchAction:(id)a0;
- (BOOL)setState:(id)a0 withValue:(id)a1;
- (void).cxx_destruct;
- (id)initWithModule:(id)a0;

@end
