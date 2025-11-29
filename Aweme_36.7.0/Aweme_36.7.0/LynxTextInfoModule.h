@class NSString, NSDictionary, LynxContext;

@interface LynxTextInfoModule : NSObject <LynxContextModule> {
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
- (id)getTextInfo:(id)a0 params:(id)a1;
- (void).cxx_destruct;

@end
