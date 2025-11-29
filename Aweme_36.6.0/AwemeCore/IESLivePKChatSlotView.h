@class HTSLiveUser, IESLivePKEventTransparentView, UIImageView, UIView, UILabel;

@interface IESLivePKChatSlotView : UIView

@property (retain, nonatomic) UIView *infoView;
@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL isConnecting;
@property (nonatomic) BOOL isPreView;
@property (retain, nonatomic) UIView *emptyView;
@property (retain, nonatomic) IESLivePKEventTransparentView *emojiView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIImageView *avaterView;
@property (nonatomic) BOOL isLeftSide;
@property (copy, nonatomic) id /* block */ onClickEmptyView;
@property (nonatomic) long long role;

- (void)addInfoView:(id)a0;
- (void)setTagForInfoView:(id)a0;
- (void)removeInfoView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)tapAction;

@end
