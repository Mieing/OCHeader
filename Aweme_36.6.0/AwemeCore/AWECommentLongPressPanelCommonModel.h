@class NSString, UIImage;

@interface AWECommentLongPressPanelCommonModel : AWEBaseBizConfigModel

@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *commonID;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *iconUrl;
@property (nonatomic) long long style;
@property (retain, nonatomic) UIImage *icon;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
