@class NSString, UIImageView, CAShapeLayer, UIView, AWEIMSearchHistoryCellModel, UILabel;

@interface AWEIMSearchHistoryCollectionViewCell : UICollectionViewCell <AWEIMRendererProtocol>

@property (retain, nonatomic) AWEIMSearchHistoryCellModel *model;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) CAShapeLayer *avatarImageMaskLayer;
@property (retain, nonatomic) UIView *onlineDotView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIImageView *aiAvatarTagView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderModel:(id)a0 context:(id)a1;
- (void)p_loadAvatar;
- (void)p_loadForamt;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
