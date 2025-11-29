@class NSString, NSArray, AWELeftSideBarListCellLeftIconModel;

@interface AWELeftSideBarCaptionBubbleConfigModel : AWELeftSideBarConfigBaseModel <NSCopying>

@property (nonatomic) BOOL needLogin;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *businessId;
@property (copy, nonatomic) NSString *componentId;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) double delayShowTime;
@property (retain, nonatomic) NSArray *tabIds;
@property (nonatomic) BOOL necessaryOpenSidebar;
@property (retain, nonatomic) AWELeftSideBarListCellLeftIconModel *strengthIconModel;

+ (id)strengthIconModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
