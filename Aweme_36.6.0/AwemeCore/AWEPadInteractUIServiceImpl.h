@class NSString;

@interface AWEPadInteractUIServiceImpl : NSObject <AWEPadInteractUIService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEFeedDOUYINiPadModuleAdapterClass;
+ (id)sharedInstance;

- (id)aAWEPadModuleAdapter;
- (BOOL)enableMoreElement;
- (void)performAutoPlayFloatBtnLayoutUpdateWithRightContainer:(id)a0 block:(id /* block */)a1;
- (id)aAWEFeedDOUYINiPadModuleAdapter;
- (BOOL)leftBottomUIAdapterSmallBreakPoint;
- (struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; })calculateAutoPlayFloatBtnLayoutWithRightContainer:(id)a0;
- (void)performFeedPlayInteractionElementLayoutUpdateWithView:(id)a0 block:(id /* block */)a1;
- (id)moreElement;
- (BOOL)enableRightElementSmallBreakPointAdapt;

@end
