@class NSString;
@protocol BDLynxProviderDelegate;

@interface BDLynxProvider : NSObject <LynxTemplateProvider>

@property (weak, nonatomic) id<BDLynxProviderDelegate> lynxProviderDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadTemplateWithUrl:(id)a0 onComplete:(id /* block */)a1;
- (void).cxx_destruct;

@end
