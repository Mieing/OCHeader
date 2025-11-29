@class NSString, NSDictionary, LynxContext;

@interface LynxResourceModule : NSObject <LynxContextModule> {
    LynxContext *context_;
}

@property (class, readonly, copy, nonatomic) NSString *name;
@property (class, readonly, copy, nonatomic) NSDictionary *methodLookup;
@property (class, readonly, copy, nonatomic) NSDictionary *attributeLookup;

@property (retain, nonatomic) id extraData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithLynxContext:(id)a0;
- (void)requestResourcePrefetch:(id)a0 callback:(id /* block */)a1;
- (void)cancelResourcePrefetch:(id)a0 callback:(id /* block */)a1;
- (struct pair<long, NSString *> { long long x0; id x1; })cancelResourcePrefetchInternal:(id)a0 type:(id)a1 params:(id)a2;
- (struct pair<long, NSString *> { long long x0; id x1; })requestResourcePrefetchInternal:(id)a0 type:(id)a1 params:(id)a2;
- (struct pair<long, NSString *> { long long x0; id x1; })resourcePrefetch:(id)a0 isCancel:(BOOL)a1 allResults:(id)a2;
- (void).cxx_destruct;

@end
