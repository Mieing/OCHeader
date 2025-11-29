@class UIImageView, UILabel, NSString;

@interface IESLiveMatrixEntranceView : UIView <HTSLivePluginLayoutView>

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long matrixId;

- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (void)openMatrixLandPage:(id)a0;
- (void).cxx_destruct;
- (id)viewType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
