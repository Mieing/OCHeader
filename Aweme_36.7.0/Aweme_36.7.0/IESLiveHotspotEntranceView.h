@class UIImageView, UIImage, UILabel, NSNumber;

@interface IESLiveHotspotEntranceView : UIView <HTSLivePluginLayoutView>

@property (retain, nonatomic) UIImageView *leftImageView;
@property (retain, nonatomic) UIImageView *centerImageView;
@property (retain, nonatomic) UILabel *titleLable;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL isVSLive;
@property (copy, nonatomic) id /* block */ didClickTitleLabelBlock;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSNumber *contentWidth;
@property (retain, nonatomic) UIImageView *rightImageView;
@property (retain, nonatomic) UIImage *leftImage;
@property (retain, nonatomic) UIImage *centerImage;

- (void)didClickTitleLabel;
- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (id)initWithType:(unsigned long long)a0 leftImage:(id)a1 centerImage:(id)a2 isVSLive:(BOOL)a3 didClickTitleLabelBlock:(id /* block */)a4;
- (void)updateLayoutWithType:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })desSize;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (id)viewType;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)updateTitle:(id)a0;

@end
