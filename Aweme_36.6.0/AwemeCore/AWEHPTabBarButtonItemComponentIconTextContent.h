@class NSString, UIImageView, AWEHPBottomTabIconTextSpecialEntryModel, UIView, AWEHPTabBarButtonItemComponentContentModel, UILabel;

@interface AWEHPTabBarButtonItemComponentIconTextContent : UIView <AWEHPTabBarButtonItemComponentContentProtocol>

@property (retain, nonatomic) AWEHPTabBarButtonItemComponentContentModel *model;
@property (retain, nonatomic) AWEHPBottomTabIconTextSpecialEntryModel *styleModel;
@property (nonatomic) double lightProgress;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)switchToLightModeWithProgress:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })buttonContentRectInWindow;
- (void)p_updateUIWithLightProgress:(double)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;
- (void)setupData;

@end
