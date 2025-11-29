@class NSString;

@interface AWEShareReviewNoticeModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *noticeText;
@property (copy, nonatomic) NSString *detailURL;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
