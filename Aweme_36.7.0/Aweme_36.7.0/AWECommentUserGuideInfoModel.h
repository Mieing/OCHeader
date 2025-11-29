@class NSString;

@interface AWECommentUserGuideInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long linkIndex;
@property (nonatomic) long long linkLength;
@property (copy, nonatomic) NSString *linkUrl;
@property (copy, nonatomic) NSString *btnText;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
