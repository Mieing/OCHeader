@class NSString, NSDictionary, LynxContext;

@interface LynxAccessibilityModule : NSObject <LynxContextModule>

@property (class, readonly, copy, nonatomic) NSString *name;
@property (class, readonly, copy, nonatomic) NSDictionary *methodLookup;
@property (class, readonly, copy, nonatomic) NSDictionary *attributeLookup;

@property (weak, nonatomic) LynxContext *context;
@property (retain, nonatomic) id extraData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
