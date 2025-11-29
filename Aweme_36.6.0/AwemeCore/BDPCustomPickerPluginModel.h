@class NSArray, BDPUniqueID, NSString;

@interface BDPCustomPickerPluginModel : BDPBasePluginModel

@property (weak, nonatomic) BDPUniqueID *uniqueID;
@property (copy, nonatomic) NSArray *components;
@property (copy, nonatomic) NSArray *selectedRows;
@property (nonatomic) long long column;
@property (nonatomic) long long pickerId;
@property (copy, nonatomic) NSString *confirmColor;
@property (copy, nonatomic) NSString *cancelColor;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL divider;
@property (copy, nonatomic) NSString *dividerColor;
@property (nonatomic) double toolbarBorderRadius;
@property (nonatomic) BOOL isLynx;

+ (id)modelCustomPropertyMapper;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (void).cxx_destruct;
- (void)updateWithModel:(id)a0;

@end
