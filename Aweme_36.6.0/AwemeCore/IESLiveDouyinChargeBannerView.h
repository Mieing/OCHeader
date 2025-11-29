@class UILabel, IESLiveRichTextBuilder, UIImageView;

@interface IESLiveDouyinChargeBannerView : UIView

@property (nonatomic) long long style;
@property (retain, nonatomic) IESLiveRichTextBuilder *richTextBuilder;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (nonatomic) double maxWidth;
@property (copy, nonatomic) id /* block */ tapBlock;

- (void)updateWithRichTextModels:(id)a0 backgroundImage:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0;
- (void)setupUI;
- (void)tapAction;

@end
