@class NSArray, UIImageView, UILabel, UIView;
@protocol MMFinderLiveBulkBuyMembersViewDelegate;

@interface MMFinderLiveBulkBuyMembersView : UIView

@property (nonatomic) BOOL withLiveDynamicFont;
@property (retain, nonatomic) NSArray *memberViews;
@property (retain, nonatomic) UIView *tailView;
@property (retain, nonatomic) UILabel *tailLabel;
@property (retain, nonatomic) UIImageView *tailIcon;
@property (nonatomic) BOOL hasMore;
@property (weak, nonatomic) id<MMFinderLiveBulkBuyMembersViewDelegate> delegate;
@property (nonatomic) BOOL forceHideArrow;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withLiveDynamicFont:(BOOL)a1;
- (void)updateWithBulkBuy:(id)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
