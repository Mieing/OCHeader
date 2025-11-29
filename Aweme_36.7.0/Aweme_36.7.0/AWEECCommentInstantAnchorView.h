@class UIView, NSString, UIImageView, UILabel, AWEAnchorInfoModel, UIButton;

@interface AWEECCommentInstantAnchorView : UIView <AWECommentListCustomExtraViewProtocol, AWEECommentInstantAnchorProtocol>

@property (retain, nonatomic) AWEAnchorInfoModel *model;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *mainTag1;
@property (retain, nonatomic) UILabel *mainTag2;
@property (retain, nonatomic) UIButton *mainTag3;
@property (retain, nonatomic) UILabel *subTag1;
@property (retain, nonatomic) UILabel *subTag2;
@property (retain, nonatomic) UIView *separatorMain;
@property (retain, nonatomic) UIView *separatorSub;
@property (retain, nonatomic) UIView *firstLineView;
@property (retain, nonatomic) UIView *secondLineView;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) BOOL isBGColorWhite;
@property (copy, nonatomic) id /* block */ tapClickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshUIWithModel:(id)a0 isBGColorWhite:(BOOL)a1;
- (double)customViewHeightInCommentListHeader;
- (void)handleTapView:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
