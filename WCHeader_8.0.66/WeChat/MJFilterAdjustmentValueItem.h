@class NSString, OMJMaterialInfo, NSURL;

@interface MJFilterAdjustmentValueItem : MJSegmentAdjustmentValueItem

@property (retain, nonatomic) OMJMaterialInfo *material;
@property (retain, nonatomic) NSString *filterID;
@property (retain, nonatomic) NSString *options;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) float intensity;
@property (retain, nonatomic) NSURL *iconURL;
@property (readonly, nonatomic) BOOL isEmpty;

- (id)initWithMaterial:(id)a0;
- (void).cxx_destruct;

@end
