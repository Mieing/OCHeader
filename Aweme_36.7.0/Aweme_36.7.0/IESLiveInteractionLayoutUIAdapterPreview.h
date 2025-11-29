@class NSArray, NSString;
@protocol IESLiveInteractionConfigLayoutCanvasAdjustable, IESLivePlayerProtocol;

@interface IESLiveInteractionLayoutUIAdapterPreview : NSObject <IESLiveInteractConfigLayoutPreviewInputProtocol>

@property (nonatomic) struct CGSize { double width; double height; } mediaSize;
@property (nonatomic) long long contentMode;
@property (weak, nonatomic) id<IESLivePlayerProtocol> previewStreamPlayer;
@property (nonatomic) BOOL isAudio;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } preferredContainerFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } preferredGuestListContainerFrame;
@property (nonatomic) double topOffset;
@property (nonatomic) double uiContainerBottomOffset;
@property (retain, nonatomic) id<IESLiveInteractionConfigLayoutCanvasAdjustable> canvasAdapter;
@property (retain, nonatomic) NSArray *customRegions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
