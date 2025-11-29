@class NSString, UIImageView, AWEECSimilarProductModel, UILabel;

@interface AWESearchVideoGoodsView : UIView <AWECommentListCustomExtraViewProtocol>

@property (retain, nonatomic) AWEECSimilarProductModel *model;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *searchSameTitle;
@property (retain, nonatomic) UILabel *searchSameContent;
@property (nonatomic) BOOL isBGColorWhite;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)customViewHeightInCommentListHeader;
- (void)updateUITheme;
- (id)initWithModel:(id)a0 isBGColorWhite:(BOOL)a1;
- (void)handleTapView:(id)a0;
- (void)p_trackVSCommentShow;
- (id)p_baseParams;
- (void)p_trackVSCommentClicked;
- (void).cxx_destruct;
- (void)refreshUI;
- (void)setupUI;

@end
