@class NSString, AWEURLModel;

@interface AWEUserProfileSpecificationBottomTip : AWEUserProfileSpecificationTip

@property (copy, nonatomic) NSString *contentHtmlLight;
@property (copy, nonatomic) NSString *contentHtmlDark;
@property (retain, nonatomic) AWEURLModel *lightIcon;
@property (retain, nonatomic) AWEURLModel *darkIcon;

+ (id)darkIconJSONTransformer;
+ (id)lightIconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
