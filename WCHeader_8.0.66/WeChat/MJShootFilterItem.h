@class NSString, OMJMaterialInfo, NSURL;

@interface MJShootFilterItem : MJSegmentAdjustmentValueItem

@property (retain, nonatomic) OMJMaterialInfo *material;
@property (retain, nonatomic) NSString *filterID;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSURL *iconURL;
@property (nonatomic) float intensity;

+ (id)createEmptyItem;

- (id)initWithMaterial:(id)a0;
- (BOOL)isEmptyItem;
- (void).cxx_destruct;

@end
