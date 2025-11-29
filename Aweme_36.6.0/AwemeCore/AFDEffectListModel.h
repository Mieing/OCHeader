@class NSArray, AWEVideoBSModel;

@interface AFDEffectListModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *templateList;
@property (nonatomic) BOOL isBirthday;
@property (retain, nonatomic) AWEVideoBSModel *video;

+ (id)templateListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
