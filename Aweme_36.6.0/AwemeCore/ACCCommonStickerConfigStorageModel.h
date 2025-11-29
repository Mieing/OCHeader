@class ACCStickerGeometryModelStorageModel, NSString, NSValue, ACCStickerTimeRangeModelStorageModel;

@interface ACCCommonStickerConfigStorageModel : MTLModel <ACCSerializationProtocol>

@property (retain, nonatomic) id typeId;
@property (retain, nonatomic) id hierarchyId;
@property (nonatomic) double minimumScale;
@property (nonatomic) double maximumScale;
@property (retain, nonatomic) ACCStickerGeometryModelStorageModel *geometryModel;
@property (retain, nonatomic) ACCStickerTimeRangeModelStorageModel *timeRangeModel;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } boxPadding;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } boxMargin;
@property (nonatomic) BOOL changeAnchorForRotateAndScale;
@property (nonatomic) long long preferredContainerFeature;
@property (retain, nonatomic) NSValue *gestureInvalidFrameValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
