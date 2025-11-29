@class UIImageView, FinderRelatedRecommendTips, NSMutableArray, WCFinderRichTextView;

@interface WCFinderMoreRelatedContentView : UIView

@property (retain, nonatomic) NSMutableArray *avatarArray;
@property (retain, nonatomic) WCFinderRichTextView *richTextView;
@property (retain, nonatomic) FinderRelatedRecommendTips *recommendTips;
@property (retain, nonatomic) UIImageView *doubleUpArrowImageView;
@property (nonatomic) double layoutWidth;
@property (nonatomic) unsigned long long identity;
@property (copy, nonatomic) id /* block */ onTapAction;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)showTitle;
- (void)layoutSubviews;
- (id)singleUpArrowXmlStr;
- (void)updateContentTitle:(id)a0 showArrow:(BOOL)a1;
- (void)clearAvatarArray;
- (void)updateContentByRecommendTips:(id)a0;
- (void)layoutRecommendTips;
- (void)_onTap;
- (double)showDurationTime;
- (double)tipsMargin;
- (void).cxx_destruct;

@end
