@class NSString;

@interface ACCNLEEditMaterialTransform : NSObject <ACCEditMaterialTransformProtocol>

@property (nonatomic) double mirror_x;
@property (copy, nonatomic) NSString *resourceFile;
@property (nonatomic) double acc_rotationValue;
@property (nonatomic) long long acc_cropRatioType;
@property (nonatomic) double acc_cropRatioValue;
@property (nonatomic) double acc_scaleValueOriginal;
@property (nonatomic) double positionX;
@property (nonatomic) double positionY;
@property (nonatomic) double rotation;
@property (nonatomic) double scale;
@property (nonatomic) struct CGPoint { double x; double y; } leftUpper;
@property (nonatomic) struct CGPoint { double x; double y; } leftLower;
@property (nonatomic) struct CGPoint { double x; double y; } rightLower;
@property (nonatomic) struct CGPoint { double x; double y; } rightUpper;
@property (nonatomic) BOOL needCrop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transformInfoFromSlot:(id)a0;
+ (id)defaultTransformModel;

- (void).cxx_destruct;
- (id)jsonString;
- (id)initWithJsonString:(id)a0;

@end
