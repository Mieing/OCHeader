@class NSString, AWEURLModel;

@interface AWESearchVSVideoBottomBarModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (retain, nonatomic) AWEURLModel *posterURL;
@property (copy, nonatomic) NSString *linkTo;

+ (id)posterURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
