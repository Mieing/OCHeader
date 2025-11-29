@class NSString;

@interface ACCImageAlbumStickerProps : MTLModel

@property (copy, nonatomic) NSString *boundingBoxString;
@property (nonatomic) double angle;
@property (nonatomic) double offsetX;
@property (nonatomic) double offsetY;
@property (nonatomic) double scale;
@property (nonatomic) double absoluteScale;
@property (nonatomic) double alpha;
@property (nonatomic) long long categotyIndex;
@property (retain, nonatomic) NSString *effectId;
@property (copy, nonatomic) NSString *textTemplateExtraPrama;
@property (copy, nonatomic) NSString *textTemplateAddExtraPrama;
@property (nonatomic) long long order;

+ (id)defaultProps;
+ (struct CGPoint { double x0; double x1; })centerOffset;

- (void)updateOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)updateBoundingBox:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })offset;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })boundingBox;
- (BOOL)isEqual:(id)a0;

@end
