@class NSString, AWELeftSideBarModel;

@interface AWEHPSideBarMoreButtonDataModel : AWEHPSideBarStencilViewDataModel

@property (copy, nonatomic) NSString *backTitle;
@property (copy, nonatomic) AWELeftSideBarModel *sideBarModel;

+ (id)sideBarModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
