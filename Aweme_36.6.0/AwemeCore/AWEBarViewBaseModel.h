@class AWEBarLayoutModel;

@interface AWEBarViewBaseModel : AWEBaseApiModel

@property (nonatomic) BOOL shouldShow;
@property (retain, nonatomic) AWEBarLayoutModel *layout;

+ (id)layoutJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
