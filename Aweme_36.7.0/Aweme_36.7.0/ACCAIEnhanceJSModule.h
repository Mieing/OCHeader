@class NSString, NSDictionary;
@protocol ACCAIEnhanceJSModuleDelegate;

@interface ACCAIEnhanceJSModule : NSObject <JSModule>

@property (class, readonly, copy, nonatomic) NSString *name;
@property (class, readonly, copy, nonatomic) NSDictionary *methodLookup;
@property (class, readonly, copy, nonatomic) NSDictionary *attributeLookup;

@property (weak, nonatomic) id<ACCAIEnhanceJSModuleDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithParam:(id)a0;
- (void)runAlgorithms:(id)a0;
- (void).cxx_destruct;

@end
