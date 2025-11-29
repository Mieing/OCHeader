@class NSString, AWELeftSideBarListCellLeftIconModel, AWELeftSideBarConfigModel;

@interface AWELeftSideBarActivityCellDataModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) BOOL needLogin;
@property (retain, nonatomic) AWELeftSideBarListCellLeftIconModel *leftIcon;
@property (retain, nonatomic) AWELeftSideBarConfigModel *redDotConfig;
@property (retain, nonatomic) AWELeftSideBarConfigModel *subTitleConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)leftIconJSONTransformer;
+ (id)subTitleConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)redDotConfigJSONTransformer;

- (void).cxx_destruct;

@end
