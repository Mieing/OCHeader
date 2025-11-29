@class UIImageView, WCFinderHeadImageView, UILabel, WCFinderContact;

@interface WCFinderLiveHeadImageLivingView : UIView

@property (retain, nonatomic) UIImageView *liveBorderView;
@property (retain, nonatomic) UILabel *liveMarkView;
@property (retain, nonatomic) WCFinderHeadImageView *headImageView;
@property (retain, nonatomic) WCFinderContact *contact;
@property (nonatomic) BOOL showLiving;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)updateWithContact:(id)a0;
- (void)initViews;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
