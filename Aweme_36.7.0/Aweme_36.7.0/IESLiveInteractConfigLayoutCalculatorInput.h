@class NSArray, IESLiveInteractConfigLayoutModel, NSString, IESLiveInteractionLayout;
@protocol IESLiveInteractionConfigLayoutCanvasAdjustable, IESLiveInteractConfigLayoutPreviewInputProtocol;

@interface IESLiveInteractConfigLayoutCalculatorInput : NSObject <IESLiveInteractConfigLayoutCalculatorInputProtocol>

@property (retain, nonatomic) IESLiveInteractConfigLayoutModel *innerModel;
@property (retain, nonatomic) IESLiveInteractionLayout *layout;
@property (copy, nonatomic) NSArray *preferrdGuestFrames;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } preferredGuestListFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } virtualContainerFrame;
@property (nonatomic) struct CGSize { double width; double height; } mediaSize;
@property (nonatomic) double topMarginAddtion;
@property (nonatomic) double bottomMarginAddtion;
@property (nonatomic) BOOL contentForceFillToHeight;
@property (nonatomic) double previewBottomAddtion;
@property (readonly, nonatomic) IESLiveInteractConfigLayoutModel *model;
@property (readonly, nonatomic) BOOL calculateAnchorFrame;
@property (readonly, nonatomic) BOOL useHostStreamLayout;
@property (readonly, nonatomic) BOOL useCustomGuestList;
@property (readonly, nonatomic) BOOL needAddAnchorSlotWhichEqualToPlayer;
@property (retain, nonatomic) id<IESLiveInteractConfigLayoutPreviewInputProtocol> previewInput;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } preferredContainerFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } preferredGuestListContainerFrame;
@property (nonatomic) double topOffset;
@property (nonatomic) double uiContainerBottomOffset;
@property (retain, nonatomic) id<IESLiveInteractionConfigLayoutCanvasAdjustable> canvasAdapter;
@property (retain, nonatomic) NSArray *customRegions;

- (BOOL)isCurrentDevicePortrait;
- (BOOL)p_needUseVirtualContainerFrame;
- (BOOL)isNonOverlapping1v6Layout;
- (double)nonOverlapping1v6TopMargin;
- (double)nonOverlapping1v6BottomMargin;
- (double)nonOverlapping1v6StandardMargin;
- (void)p_updateInnerModelWithPreviewInput:(id)a0;
- (void)calculatePreferredGuestListFrameForDynamicLayout1V6Horizontal;
- (void)p_processInnerModelForiPad;
- (void)updateScaleModeForAnchorIfNeeded;
- (void)calculateUIContainerAdapter;
- (void)calculateCanvasAdapter;
- (void)calculateCrossRoomStreamInsetsFor6v6;
- (void)calculateFloatDynamicGuestListForAnchor;
- (void)calculateLandScapeDeviceAndSteam;
- (void)calculateCustomRegions;
- (BOOL)isFloatDynamicAnchor;
- (void)calculateFloatDynamicGuestListFrameForSingleViewAnchor;
- (void)p_calculateFloatDynamicGuestFrames;
- (id)initWithLayoutModel:(id)a0 layout:(id)a1 diContext:(id)a2;
- (void).cxx_destruct;
- (BOOL)isValid;
- (BOOL)isAnchor;
- (BOOL)isPreview;
- (BOOL)isLandscape;
- (int)uiLayout;
- (void)calculate;

@end
