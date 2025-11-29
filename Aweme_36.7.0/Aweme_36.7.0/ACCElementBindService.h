@class NSString, NSMutableDictionary;

@interface ACCElementBindService : NSObject <ACCElementBindService> {
    NSMutableDictionary *m_subscribers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_callbackWithResponse:(id)a0 error:(id)a1 params:(id)a2 completion:(id /* block */)a3;
- (id)p_sortBindData:(id)a0;
- (id)p_sortArrayForTargetType:(long long)a0;
- (void)setSubscriber:(id)a0 forTargetType:(long long)a1;
- (void)updateWithParams:(id)a0 completion:(id /* block */)a1;
- (void)removeWithDataSource:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)removeSubscriber:(id)a0;

@end
