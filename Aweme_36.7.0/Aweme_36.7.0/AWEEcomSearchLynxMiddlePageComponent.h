@class AWEEcomSearchViewModel, NSString, AWEEcomSearchLynxEngine, AWEEcomSearchLynxMiddleViewController, AWEDynamicPatchModel;

@interface AWEEcomSearchLynxMiddlePageComponent : NSObject <AWEEcomSearchLynxEngineDelegate>

@property (retain, nonatomic) AWEEcomSearchLynxEngine *lynxEngine;
@property (retain, nonatomic) AWEDynamicPatchModel *model;
@property (retain, nonatomic) AWEEcomSearchViewModel *searchViewModel;
@property (weak, nonatomic) AWEEcomSearchLynxMiddleViewController *rootViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
