@class AWEIMRefreshImageView, UIImageView, NSString;

@interface AWEIMMessageQuoteMediaView : UIView

@property (retain, nonatomic) AWEIMRefreshImageView *coverImageView;
@property (retain, nonatomic) UIImageView *playIcon;
@property (copy, nonatomic) NSString *messageID;
@property (copy, nonatomic) id /* block */ tapActionBlock;

- (void)configWithModel:(id)a0;
- (void)p_configAccessibility:(id)a0;
- (void)p_configImageView:(id)a0;
- (void)p_configPlayIcon:(id)a0;
- (void)p_configPlayIconWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)clear;
- (id)init;

@end
