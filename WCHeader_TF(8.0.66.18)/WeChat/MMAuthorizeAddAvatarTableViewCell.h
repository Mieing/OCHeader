@class NSString, UIImageView, CALayer, MMUILabel;

@interface MMAuthorizeAddAvatarTableViewCell : UITableViewCell

@property (copy, nonatomic) NSString *wording;
@property (retain, nonatomic) UIImageView *addIconView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) CALayer *separateLine;

+ (double)cellHeightForWidth:(double)a0 wording:(id)a1;

- (id)initWithWording:(id)a0;
- (void)initSubviews;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
