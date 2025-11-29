@class NSString, NSArray;
@protocol IESLiveInteractionConfigLayoutCanvasAdjustable, IESLiveInteractConfigLayoutPreviewInputProtocol;

@interface IESLiveInteractConfigLayoutEngineInput : NSObject <IESLiveInteractConfigLayoutEngineInputProrocol>

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

- (void).cxx_destruct;

@end
