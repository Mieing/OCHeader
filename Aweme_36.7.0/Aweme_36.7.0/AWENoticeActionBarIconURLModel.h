@class AWEURLModel;

@interface AWENoticeActionBarIconURLModel : AWEBaseApiModel

@property (copy, nonatomic) AWEURLModel *darkIcon;
@property (copy, nonatomic) AWEURLModel *lightIcon;

+ (id)darkIconJSONTransformer;
+ (id)lightIconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
