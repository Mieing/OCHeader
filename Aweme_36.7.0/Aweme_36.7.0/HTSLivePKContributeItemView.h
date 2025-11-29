@class UIImageView, IESLiveGradientView, HTSLivePKContributeItem;
@protocol IESLiveSettings;

@interface HTSLivePKContributeItemView : UIView

@property (retain, nonatomic) UIImageView *centerImageView;
@property (retain, nonatomic) IESLiveGradientView *avatarImageBackView;
@property (retain, nonatomic) UIImageView *mvpImageView;
@property (retain, nonatomic) UIImageView *indexImageview;
@property (nonatomic) BOOL isRightIncrease;
@property (retain, nonatomic) HTSLivePKContributeItem *item;
@property (retain, nonatomic) id<IESLiveSettings> settings;

- (id)initWithRightIncrease:(BOOL)a0;
- (void)updateWithItem:(id)a0 roomId:(id)a1;
- (void)updateWin:(BOOL)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
