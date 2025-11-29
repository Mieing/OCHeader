@class AWEElementContainer, NSString, AWEPadRightElementLayoutInfo, UIViewController;
@protocol AWEPlayInteractionViewControllerProtocol;

@interface AWEPadRightElementLayout : NSObject <AWEPadRightElementLayoutProtocol>

@property (retain, nonatomic) AWEPadRightElementLayoutInfo *layoutInfo;
@property (nonatomic) double hitTestingInsetLeft;
@property (weak) UIViewController<AWEPlayInteractionViewControllerProtocol> *viewController;
@property (weak, nonatomic) AWEElementContainer *container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)duxGrid_viewSizeDidChangeToBreakPoint:(struct { long long x0; long long x1; })a0;
- (void)duxGrid_superViewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })a0 toBreakPoint:(struct { long long x0; long long x1; })a1;
- (double)fontSizeWithLargeFontAdapted;
- (double)layoutButton:(id)a0;
- (void)updateLayoutInfoWithSizeChange;
- (void)updateLayoutInfoV1WithBreakPoint:(long long)a0;
- (void)updateLayoutInfoV2WithBreakPoint:(long long)a0;
- (void)updateLayoutInfoV3WithRate:(double)a0;
- (void)updateLayoutInfoV3WithBreakPoint:(long long)a0;
- (double)listenMusicTextfontSizeWithLargeFontAdapted;
- (double)layoutAvatar:(id)a0;
- (double)layoutMusic:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
