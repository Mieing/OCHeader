@class AWEAwemeModel, NSString, AWEPlayInteractionContext, NSAttributedString, UITapGestureRecognizer, UIImageView, UIButton, UILabel;

@interface AWEPlayInteractionDislikeLeftView : UIView

@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) AWEPlayInteractionContext *context;
@property (copy, nonatomic) NSAttributedString *attrTips;
@property (retain, nonatomic) UITapGestureRecognizer *tapGes;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIButton *dislikeButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (copy, nonatomic) id /* block */ dislikeActionBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;

- (void)_onAwemeDeleteNotification:(id)a0;
- (void)trackDislikeClicked;
- (void)onDislikeClicked:(id)a0;
- (void)onCancelClicked:(id)a0;
- (void)updateByModel:(id)a0 context:(id)a1;
- (void)addTapGesture;
- (void).cxx_destruct;
- (id)init;
- (void)setupSubviews;

@end
