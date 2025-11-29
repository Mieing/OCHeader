@class BDPTradeCommentModel, UIButton, UIImageView, NSMutableArray, UIView, BDPUniqueID, UILabel;
@protocol BDPAboutTradeCommentViewDelegate;

@interface BDPAboutTradeCommentView : UIView

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPTradeCommentModel *model;
@property (retain, nonatomic) UIView *marginTopView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *dynamicPayloadView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *scoreLabel;
@property (retain, nonatomic) UIImageView *tagIcon;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UIImageView *detailArrow;
@property (retain, nonatomic) UIButton *commentButton;
@property (retain, nonatomic) NSMutableArray *commentSubviews;
@property (weak, nonatomic) id<BDPAboutTradeCommentViewDelegate> delegate;

- (void)updateWithTradeModel:(id)a0;
- (void)onDetailTapped;
- (id)generateImageViewWithCommentModel:(id)a0;
- (id)generateCommentLabelWithCommentModel:(id)a0;
- (void)trackCommentShow;
- (void).cxx_destruct;
- (void)loadContentView;
- (id)initWithUniqueID:(id)a0;
- (void)setUpUI;
- (void)writeComment:(id)a0;

@end
