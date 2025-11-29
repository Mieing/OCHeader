@class IESLiveRevenueInteractLinkerLayoutConfig, NSString, NSArray, IESLiveRevenueInteractLayoutResourceParser, NSDictionary, UIButton, HTSInteractStreamContent, IESLiveLinkmicLayout, NSNumber;

@interface IESLiveRevenueInteractLinkerLayout : NSObject <IESLiveLinkmicLayoutLogger, IESLiveRevenueInteractLinkerLayoutProvider>

@property (copy, nonatomic) NSString *curLayoutStamp;
@property (retain, nonatomic) IESLiveLinkmicLayout *curLayout;
@property (retain, nonatomic) IESLiveRevenueInteractLinkerLayoutConfig *config;
@property (retain, nonatomic) IESLiveRevenueInteractLayoutResourceParser *resourceParser;
@property (copy, nonatomic) NSDictionary *layoutKeyDict;
@property BOOL logMultiThreadProtect;
@property (retain, nonatomic) UIButton *layoutDebugIcon;
@property (nonatomic) BOOL isAnchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } renderFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } streamFrame;
@property (copy, nonatomic) NSArray *streamRegions;
@property (retain, nonatomic) HTSInteractStreamContent *streamContent;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } videoFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } componentsFrame;
@property (copy, nonatomic) NSArray *bizSlots;
@property (copy, nonatomic) NSArray *bizSlotsStr;
@property (nonatomic) double topDistance;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } playerFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } vicePlayerFrame;
@property (nonatomic) long long scaleType;
@property (nonatomic) long long alignMode;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentRatioFrame;
@property (retain, nonatomic) NSNumber *layoutKey;
@property (nonatomic) BOOL isDoubleLink;
@property (nonatomic) struct CGSize { double width; double height; } stickerSize;
@property (nonatomic) struct CGSize { double width; double height; } lastStickerSize;
@property (nonatomic) BOOL isCloudCollaborate;

- (void)didSetAttachingDIContext;
- (void)updateLayoutWithConfig:(id)a0;
- (void)checkFileExist;
- (BOOL)enableLinkerLayoutDebug;
- (id)interactProvider;
- (void)updateLayoutAfterPlayerFrameChange;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adaptIpadLayoutFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)askPlayerTopOffsetWithSEIResult:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentScreenFrame;
- (id)localConfigBundlePath;
- (BOOL)forceUseLocalConfig;
- (void)logRevenueInteractLinkerLayoutInfo:(id)a0 params:(id)a1 monitor:(BOOL)a2;
- (BOOL)setupConfigWithSEI:(id)a0;
- (double)bizTopOffset:(id)a0;
- (void)updateLayoutAfterBuild;
- (BOOL)shouldUpdateLayoutWithSticker;
- (BOOL)userDefaultPlayerContainer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })addTopOffset:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)p_addLayoutDebugIcon;
- (BOOL)isValidFrame;
- (void)adaptOldGrids:(id)a0;
- (void)safeLogRevenueInteractLinkerLayoutInfo:(id)a0 params:(id)a1 monitor:(BOOL)a2;
- (void)p_removeLayoutDebugIcon;
- (void)p_showRenderArea;
- (void)logLinkmicLayoutEvent:(id)a0 params:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
