@class NSString;

@interface AWEHotSearchCommentSectionFooterModel : NSObject

@property (nonatomic) BOOL hasExpandReply;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) BOOL isVote;
@property (nonatomic) BOOL shouldEmphasis;
@property (copy, nonatomic) NSString *subCommentCountText;
@property (copy, nonatomic) NSString *sourceText;
@property (copy, nonatomic) NSString *sourceContentText;

- (id)p_showStringFromNumber:(id)a0;
- (id)p_descriptionStringForAweme:(id)a0;
- (id)p_handleLineFeedAndSpace:(id)a0;
- (void)configWithCardModel:(id)a0;
- (void).cxx_destruct;
- (double)footerHeight;

@end
