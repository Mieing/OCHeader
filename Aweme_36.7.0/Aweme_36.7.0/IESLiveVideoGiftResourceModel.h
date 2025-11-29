@class IESLiveVideoGiftResourceInfo, NSString;

@interface IESLiveVideoGiftResourceModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long currentOrientation;
@property (retain, nonatomic) IESLiveVideoGiftResourceInfo *portraitResourceInfo;
@property (retain, nonatomic) IESLiveVideoGiftResourceInfo *landscapeResourceInfo;
@property (copy, nonatomic) NSString *directory;
@property (retain, nonatomic) IESLiveVideoGiftResourceInfo *currentOrientationResourceInfo;
@property (copy, nonatomic) id /* block */ offscreenRenderCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resourceModelFromDirectory:(id)a0 orientation:(unsigned long long)a1 maskResourceDic:(id)a2 offscreenRenderCallback:(id /* block */)a3 error:(id *)a4;
+ (id)resourceModelFromDirectory:(id)a0 orientation:(unsigned long long)a1 maskResourceDic:(id)a2 error:(id *)a3;
+ (id)JSONKeyPathsByPropertyKey;

- (void)pr_replenish;
- (void)prepareForMasks;
- (void)buildFilePathForModel:(id)a0;
- (void)prepareForMultiVideoSource:(id)a0;
- (void)processMaskDataModel:(id)a0;
- (void)processVideoLayerDataModel:(id)a0;
- (void)processMaskContainerModel:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })genRectFromRectArray:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })genEdgeFromEdgeArray:(id)a0;
- (struct CGPoint { double x0; double x1; })genPointFromPointArray:(id)a0;
- (void).cxx_destruct;
- (id)initWithDirectory:(id)a0;

@end
