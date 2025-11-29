@class NSString, NSDictionary, LynxContext;

@interface AWEShelfLynxEmbeddedBridgeModule : NSObject <LynxContextModule>

@property (class, readonly, copy, nonatomic) NSString *name;
@property (class, readonly, copy, nonatomic) NSDictionary *methodLookup;
@property (class, readonly, copy, nonatomic) NSDictionary *attributeLookup;

@property (weak, nonatomic) LynxContext *lynxContext;
@property (retain, nonatomic) id extraData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)getGlobalData:(id)a0;
- (id)refreshGlobalData:(id)a0;
- (id)updateData:(id)a0 success:(id /* block */)a1 fail:(id /* block */)a2;
- (id)getLynxEmbeddedView;
- (id)getComponentViewWithLynxView:(id)a0;
- (id)initWithLynxContext:(id)a0;
- (void).cxx_destruct;

@end
