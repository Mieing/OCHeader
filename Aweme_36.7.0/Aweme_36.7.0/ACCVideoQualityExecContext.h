@class IESVideoAddEdgeData;

@interface ACCVideoQualityExecContext : NSObject

@property (nonatomic) struct CGSize { double width; double height; } templateSize;
@property (weak, nonatomic) IESVideoAddEdgeData *infoStickerAddEdgeData;
@property (nonatomic) BOOL enableMultiTrack;
@property (nonatomic) struct ACCVideoQualityTranscodeParams { struct CGSize { double width; double height; } canvasSize; struct CGSize { double width; double height; } videoSize; struct CGSize { double width; double height; } edgeSize; } mergeTransParams;
@property (nonatomic) struct ACCVideoQualityTranscodeParams { struct CGSize { double width; double height; } canvasSize; struct CGSize { double width; double height; } videoSize; struct CGSize { double width; double height; } edgeSize; } watermarkTransParams;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalPlayerFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } editPlayerFrame;
@property (nonatomic) BOOL mockSourceSetting;
@property (nonatomic) struct CGSize { double width; double height; } degradeSize;

- (void).cxx_destruct;

@end
