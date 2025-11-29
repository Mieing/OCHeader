@class NSString, AWEVideoPublishViewModel;

@interface ACCVideoDataEditCanvasState : ACCVideoDataCanvasState <ACCVideoDataEditCanvasStateProtocol>

@property (nonatomic) struct CGSize { double width; double height; } maxEditCanvasSize;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) struct CGSize { double width; double height; } canvasSize;
@property (nonatomic) double defaultScale;
@property (nonatomic) long long contentPreviewMode;
@property (nonatomic) unsigned long long mediaDisplayType;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } standPlayerFrame;
@property (nonatomic) double standPlayerRatio;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } minCanvasSize;
@property (nonatomic) unsigned long long appliedType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)imageQ_trackDict;
- (void)resetMaxEditCanvasSize;

@end
