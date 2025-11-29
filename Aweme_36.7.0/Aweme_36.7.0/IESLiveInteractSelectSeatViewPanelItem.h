@class UITapGestureRecognizer, UIImageView, UILabel;
@protocol IESLiveInteractUserModel, IESLiveInteractSelectSeatViewPanelItemDelegate;

@interface IESLiveInteractSelectSeatViewPanelItem : UIView

@property (retain, nonatomic) id<IESLiveInteractUserModel> enlargeUser;
@property (weak, nonatomic) id<IESLiveInteractSelectSeatViewPanelItemDelegate> delegate;
@property (nonatomic) BOOL isChoosen;
@property (nonatomic) BOOL isLargeType;
@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *nameLabel;

+ (id)vitemForDoubleCChoose;
+ (id)vitemForKickOut;

- (void)onSelfClick;
- (id)initWithTypeLarge:(BOOL)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupViews;

@end
