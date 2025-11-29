@class NSArray, BDPUniqueID, NSString;

@interface BDPRegionPickerPluginModel : BDPBasePluginModel

@property (weak, nonatomic) BDPUniqueID *uniqueID;
@property (copy, nonatomic) NSArray *current;
@property (copy, nonatomic) NSString *customItem;
@property (copy, nonatomic) NSString *level;
@property (nonatomic) long long pickerId;
@property (copy, nonatomic) NSString *confirmColor;
@property (copy, nonatomic) NSString *cancelColor;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL divider;
@property (copy, nonatomic) NSString *dividerColor;
@property (nonatomic) double toolbarBorderRadius;
@property (nonatomic) BOOL isLynx;
@property (copy, nonatomic) NSArray *regionAreaInfo;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
