@class UIImageView, UILabel;

@interface MMLiveNoticeSelectButton : MMUIButton

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (nonatomic) double maxWidth;

- (id)init;
- (void)updateLiveNoticeSelectButtonTitle:(id)a0 showArrowImageView:(BOOL)a1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void).cxx_destruct;

@end
