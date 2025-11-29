@class UIImageView, UILabel;

@interface AWEUserProfileRecommendView : UIView

@property (retain, nonatomic) UIImageView *recommendImageView;
@property (retain, nonatomic) UILabel *recommendLabel;

- (void)configRecommendReasonWithText:(id)a0 attachmentIcon:(id)a1;
- (void)testAttributedStringWithHTMLString:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (double)iconWidth;
- (double)labelFontSize;

@end
