@class DUXBaseImageView, UIButton, UIFont, NSString, UILabel, DUXBadge, UIView;

@interface AWELeftSideBarRecentVisitHeaderView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) DUXBadge *dotView;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIView *subTitleContainerView;
@property (retain, nonatomic) DUXBaseImageView *arrowView;
@property (retain, nonatomic) UIButton *clickButton;
@property (nonatomic) BOOL bottomLine;
@property (retain, nonatomic) UIFont *titleFont;
@property (nonatomic) double titleHeight;
@property (nonatomic) double titleTopPadding;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (nonatomic) BOOL isHasSubTitleRedDot;
@property (copy, nonatomic) id /* block */ clickBlock;

- (void)clickButtonClick;
- (id)initWithBottomLine:(BOOL)a0 titleFont:(id)a1 withTitleHeight:(double)a2 withTitleTopPadding:(double)a3;
- (void)newAWELeftSideBarRecentVisitHeaderViewSetCorner;
- (void)oldAWELeftSideBarRecentVisitHeaderViewSetCorner;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;

@end
