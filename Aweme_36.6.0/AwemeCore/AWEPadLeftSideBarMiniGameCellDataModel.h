@class NSString, NSArray, AWEPadLeftSideBarListCellBackgroundModel, AWELeftSideBarConfigModel, AWEPadLeftSideBarMiniGameShowConfigModel;

@interface AWEPadLeftSideBarMiniGameCellDataModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL needLogin;
@property (copy, nonatomic) NSArray *gameList;
@property (retain, nonatomic) AWELeftSideBarConfigModel *redDotConfig;
@property (retain, nonatomic) AWELeftSideBarConfigModel *subTitleConfig;
@property (retain, nonatomic) AWEPadLeftSideBarMiniGameShowConfigModel *gameShowConfig;
@property (retain, nonatomic) AWEPadLeftSideBarListCellBackgroundModel *background;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subTitleConfigJSONTransformer;
+ (id)gameListJSONTransformer;
+ (id)gameShowConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)redDotConfigJSONTransformer;

- (void).cxx_destruct;

@end
