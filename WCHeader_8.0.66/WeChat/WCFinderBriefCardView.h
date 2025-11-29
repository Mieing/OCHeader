@class UILabel, RichTextView, MMWebImageView;

@interface WCFinderBriefCardView : MMUIView

@property (retain, nonatomic) MMWebImageView *avatarView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) RichTextView *introTextView;
@property (retain, nonatomic) RichTextView *guideTextView;
@property (copy, nonatomic) id /* block */ clickAction;

+ (double)cardHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithContact:(id)a0 rightText:(id)a1 clickAction:(id /* block */)a2;
- (void)layoutAllSubviews;
- (void).cxx_destruct;

@end
