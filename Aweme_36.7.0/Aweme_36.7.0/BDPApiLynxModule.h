@class LynxContext, NSString, NSDictionary, BDPUniqueID;

@interface BDPApiLynxModule : NSObject <LynxContextModule> {
    BDPUniqueID *uniqueID_;
    unsigned long long invokeType_;
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


- (id)initWithLynxContext:(id)a0 WithParam:(id)a1;
- (void)invoke:(id)a0 param:(id)a1 callback:(id /* block */)a2;
- (id)invokeSync:(id)a0 param:(id)a1;
- (id)bdp_object_lynx:(id)a0;
- (id)bdp_encodeNativeBuffersIfNeed:(id)a0;
- (id)decidedFinalAPIReturnType:(id)a0 JSBName:(id)a1 andID:(id)a2;
- (void).cxx_destruct;
- (id)uniqueID;

@end
