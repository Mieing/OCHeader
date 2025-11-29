@interface EmoticonBoardViewFactory : NSObject

+ (id)getViewConfigWithType:(int)a0 andFactoryHelper:(id)a1;
+ (void)setupViewMiscOptionsForConfig:(id)a0 WithType:(int)a1 andFactoryHelper:(id)a2;
+ (void)setupTabConfig:(id)a0 WithType:(int)a1;
+ (void)checkIsCameraEntranceEnabledFor:(id)a0;
+ (void)checkIsCameraEmoticonAddEntryEnabledWithType:(int)a0 For:(id)a1;
+ (void)checkIsCustomEmoticonAddEntryEnabledWithType:(int)a0 For:(id)a1;
+ (id)getConfigWithAllTabItemDisabled;

@end
