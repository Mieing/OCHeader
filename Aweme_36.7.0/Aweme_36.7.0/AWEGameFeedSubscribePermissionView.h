@class BDPCloseButton, NSString, UIImage, UIView, BDPUniqueID, UIImageView, UIButton, UILabel;
@protocol AWEGameFeedSubscribePermissionViewDelegate;

@interface AWEGameFeedSubscribePermissionView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) UIImage *feedSubscribeImage;
@property (copy, nonatomic) NSString *feedSubscribeCoverUrl;
@property (copy, nonatomic) NSString *feedSubscribeInstruction;
@property (copy, nonatomic) NSString *permissionTips;
@property (copy, nonatomic) NSString *startType;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) BDPCloseButton *closeButton;
@property (retain, nonatomic) UIImageView *gameIcon;
@property (retain, nonatomic) UILabel *gameName;
@property (retain, nonatomic) UIButton *rejectButton;
@property (retain, nonatomic) UIButton *acceptButton;
@property (retain, nonatomic) UILabel *instruction;
@property (retain, nonatomic) UIImageView *feedCardPic;
@property (retain, nonatomic) UIImageView *feedCover;
@property (retain, nonatomic) UILabel *tips;
@property (retain, nonatomic) UIView *topContent;
@property (retain, nonatomic) UIView *topSubContent;
@property (retain, nonatomic) UIView *centerContent;
@property (retain, nonatomic) UIView *centerSubContent;
@property (retain, nonatomic) UIView *bottomContent;
@property (retain, nonatomic) UIView *feedBg;
@property (nonatomic) BOOL sub_all;
@property (nonatomic) BOOL dismissAnimate;
@property (nonatomic) BOOL needRecordUserAction;
@property (nonatomic) BOOL dismissWhenError;
@property (nonatomic) long long scene;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (weak, nonatomic) id<AWEGameFeedSubscribePermissionViewDelegate> viewDelegate;
@property (weak, nonatomic) id<AWEGameFeedSubscribePermissionViewDelegate> controlDelegate;
@property (copy, nonatomic) id /* block */ callback;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 builder:(id)a1;
- (void)updateCoverUrl:(id)a0;
- (BOOL)showFromParentView:(id)a0 completion:(id /* block */)a1;
- (BOOL)dismissViewWithAnimate:(BOOL)a0 completion:(id /* block */)a1;
- (void)eventShow;
- (void)eventClick:(id)a0;
- (void)onClickClose:(id)a0;
- (id)buildButton;
- (void)onClickReject:(id)a0;
- (void)onClickAccept:(id)a0;
- (void)onClickContentView:(id)a0;
- (void).cxx_destruct;
- (void)setUpUI;
- (void)layoutUI;

@end
