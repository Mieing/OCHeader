@class UIImageView, UILabel, NSString;

@interface IESECLiveAnchorFlashSaleCreateViewHintCell : IESECLiveAnchorFlashSaleCreateViewCell

@property (retain, nonatomic) UIImageView *hintImageView;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) NSString *hintString;
@property (retain, nonatomic) NSString *backgroundColorString;
@property (retain, nonatomic) NSString *hintImageURL;
@property (nonatomic) long long fontSize;
@property (retain, nonatomic) NSString *hintColorString;

- (void)setItem:(id)a0 showWarn:(BOOL)a1;
- (void)p_setupCustomUI;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
