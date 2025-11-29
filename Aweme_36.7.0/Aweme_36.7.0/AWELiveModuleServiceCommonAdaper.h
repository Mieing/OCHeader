@class NSString;

@interface AWELiveModuleServiceCommonAdaper : AWELiveModuleServiceCommonAdaperDefault <AWELiveModuleServiceCommonAdaper>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)weakTargetClass;

- (BOOL)fastStartLivePanelViewStyle;
- (id)fastStartLiveEnterFrom;
- (id)weakTarget;

@end
