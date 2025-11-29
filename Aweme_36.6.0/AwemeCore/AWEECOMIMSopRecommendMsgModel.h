@class NSString, NSArray, NSAttributedString;

@interface AWEECOMIMSopRecommendMsgModel : AWEECOMIMBaseMsgModel

@property (copy, nonatomic) NSString *tipContent;
@property (copy, nonatomic) NSArray *sopAction;
@property (copy, nonatomic) NSAttributedString *attributedContent;

+ (Class)cellClass;

- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;

@end
