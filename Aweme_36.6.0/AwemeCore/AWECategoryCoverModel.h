@class NSString, AWENewURLModel;

@interface AWECategoryCoverModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *awemeID;
@property (retain, nonatomic) AWENewURLModel *originCover;
@property (retain, nonatomic) AWENewURLModel *dynamicCoverModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
