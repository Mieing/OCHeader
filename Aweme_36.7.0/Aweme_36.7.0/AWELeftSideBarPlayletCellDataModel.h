@class AWELeftSideBarPlayletCellTopLeftLabelDataModel;

@interface AWELeftSideBarPlayletCellDataModel : AWELeftSideBarVideoCellDataModel

@property (retain, nonatomic) AWELeftSideBarPlayletCellTopLeftLabelDataModel *topLeftLabel;

+ (id)topLeftLabelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)description;

@end
