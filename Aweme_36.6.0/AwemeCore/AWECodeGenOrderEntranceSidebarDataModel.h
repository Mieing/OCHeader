@class NSString;

@interface AWECodeGenOrderEntranceSidebarDataModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *modelID;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) int bizId;
@property (nonatomic) int type;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
