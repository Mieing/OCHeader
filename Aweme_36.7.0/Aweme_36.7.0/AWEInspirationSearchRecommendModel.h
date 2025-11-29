@class NSString, NSAttributedString;

@interface AWEInspirationSearchRecommendModel : NSObject

@property (nonatomic) long long sugIndex;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *contentId;
@property (copy, nonatomic) NSAttributedString *attributedContent;
@property (copy, nonatomic) NSString *imprId;

- (void).cxx_destruct;
- (id)init;

@end
