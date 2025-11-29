@class AWEProfileEABaseDataSource, AWEProfileContext, AWEProfileEventCenter, NSDictionary, AWEProfileHeaderContext, AWEUserModel, AWEProfileServiceCenter;

@interface AWEProfileExtensionAreaContext : AWEPageContext

@property (weak, nonatomic) AWEProfileContext *profileContext;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (retain, nonatomic) AWEProfileHeaderContext *profileHeaderContext;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) AWEProfileServiceCenter *serviceCenter;
@property (retain, nonatomic) AWEProfileEventCenter *eventCenter;
@property (copy, nonatomic) NSDictionary *extraInfoDict;
@property (weak, nonatomic) AWEProfileEABaseDataSource *dataSource;
@property (nonatomic) BOOL hasPerformedPopoverDuringCurrentConfig;
@property (nonatomic) BOOL hasPerformedDynamicIconDuringCurrentConfig;
@property (nonatomic) BOOL hasDragged;

- (void)dealloc;
- (void)resolveScene;
- (void).cxx_destruct;
- (id)init;

@end
