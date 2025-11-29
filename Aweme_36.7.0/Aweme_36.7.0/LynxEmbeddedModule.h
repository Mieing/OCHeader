@class LynxContext, NSString, NSDictionary, LynxViewGroup;

@interface LynxEmbeddedModule : NSObject <LynxContextModule> {
    LynxContext *context_;
    LynxViewGroup *lynxViewGroup_;
}

@property (class, readonly, copy, nonatomic) NSString *name;
@property (class, readonly, copy, nonatomic) NSDictionary *methodLookup;
@property (class, readonly, copy, nonatomic) NSDictionary *attributeLookup;

@property (retain, nonatomic) id extraData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
