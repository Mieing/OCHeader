@class IESLiveInteractionLayoutUIAdapterPreview, NSArray, NSString, IESLiveInteractionLayoutCanvasAdapter;
@protocol IESLiveInteractConfigLayoutPreviewInputProtocol;

@interface IESLiveInteractionLayoutUIAdapter : NSObject <IESLiveInteractConfigLayoutEnginePreviewInputGettable>

@property (retain, nonatomic) IESLiveInteractionLayoutUIAdapterPreview *preview;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } playerContainerFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } guestListContainerFrame;
@property (nonatomic) double containerTopOffset;
@property (nonatomic) double uiContainerBottomOffset;
@property (retain, nonatomic) IESLiveInteractionLayoutCanvasAdapter *canvasAdapter;
@property (nonatomic) BOOL isNeedCleanCache;
@property (retain, nonatomic) NSArray *customRegions;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } scaleContainerFrame;
@property (retain, nonatomic) id<IESLiveInteractConfigLayoutPreviewInputProtocol> previewInput;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)previewInput;
- (void).cxx_destruct;

@end
