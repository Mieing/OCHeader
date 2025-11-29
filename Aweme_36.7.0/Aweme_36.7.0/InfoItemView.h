@class NSString, UIImageView, UILabel, UIView;

@interface InfoItemView : UIView

@property (retain, nonatomic) UILabel *preTitle;
@property (retain, nonatomic) UIView *contentContainer;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIImageView *arrowView;
@property (copy, nonatomic) NSString *contentPlaceholder;
@property (nonatomic) long long itemType;

- (void)setContentLabelText:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (void)setupUI;

@end
