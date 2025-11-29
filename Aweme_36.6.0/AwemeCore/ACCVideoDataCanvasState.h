@class NSString, AWEVideoPublishViewModel;

@interface ACCVideoDataCanvasState : MTLModel <ACCVideoDataCanvasStateProtocol>

@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } standPlayerFrame;
@property (nonatomic) double standPlayerRatio;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } minCanvasSize;
@property (nonatomic) unsigned long long appliedType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithPublishModel:(id)a0;
- (id)imageQ_trackDict;
- (void).cxx_destruct;

@end
