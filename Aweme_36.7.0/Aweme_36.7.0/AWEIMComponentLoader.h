@class NSArray, AWEIMComponentContext, NSDictionary, NSString;
@protocol AWEIMComponentLoaderDelegate;

@interface AWEIMComponentLoader : NSObject <AWEIMComponentDIFactory>

@property (retain, nonatomic) NSArray *clzNames;
@property (retain, nonatomic) NSArray *lazyClzNames;
@property (weak, nonatomic) AWEIMComponentContext *context;
@property (retain, nonatomic) NSDictionary *lazyInterfaceMap;
@property (weak, nonatomic) id<AWEIMComponentLoaderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initialMakeComponents;
- (id)resolveLazyComponentWithInterface:(id)a0;
- (id)createComponent:(id)a0 context:(id)a1;
- (BOOL)p_canCreateComponent:(Class)a0 context:(id)a1;
- (id)p_createComponent:(Class)a0 context:(id)a1;
- (void)p_didLoaderCreateNewComponent:(id)a0;
- (id)p_findLazyComponentLoaderWithInterface:(id)a0;
- (id)initWithClassNames:(id)a0 lazyClassNames:(id)a1 context:(id)a2;
- (void).cxx_destruct;

@end
