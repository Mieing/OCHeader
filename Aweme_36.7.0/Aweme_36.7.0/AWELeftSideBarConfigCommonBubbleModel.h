@class NSString;

@interface AWELeftSideBarConfigCommonBubbleModel : AWELeftSideBarConfigBaseModel <NSCopying>

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL needLogin;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *businessId;
@property (nonatomic) BOOL necessaryOpenSidebar;
@property (copy, nonatomic) NSString *enterFrom;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
