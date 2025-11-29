@class NSString;
@protocol IESECTabKitTemplateProvider;

@interface AWEECTabKitTemplateProvider : NSObject <BDXLynxTemplateProvider>

@property (weak, nonatomic) id<IESECTabKitTemplateProvider> templateProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)loadTemplateWithUrl:(id)a0 onComplete:(id /* block */)a1;
- (id)initWithTemplateProvider:(id)a0;
- (void).cxx_destruct;

@end
