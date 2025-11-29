@class AWEPushSearchAnchorItemView, AWEIndividualWordModel, UILabel, UIView;

@interface AWECommentPushSearchAnchorView : UIView <AWECommentPushSearchAnchorView>

@property (nonatomic) BOOL isBgWhite;
@property (nonatomic) double maxWidth;
@property (copy, nonatomic) id /* block */ itemClickBlock;
@property (copy, nonatomic) id /* block */ itemsDisplayBlock;
@property (retain, nonatomic) AWEIndividualWordModel *model;
@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEPushSearchAnchorItemView *itemView;
@property (nonatomic) double titleViewWidth;

+ (id)createInitView;

- (void)trackPushSearchAnchorShowIfNeeded;
- (void)updateUITheme:(BOOL)a0;
- (void)itemDidClicked:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithModel:(id)a0;
- (void)updateItem;
- (void)updateTitleView;

@end
