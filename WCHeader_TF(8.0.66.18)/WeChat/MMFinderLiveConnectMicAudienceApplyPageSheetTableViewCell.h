@class NSString, UIImageView, UIImage, UILabel, UIView;

@interface MMFinderLiveConnectMicAudienceApplyPageSheetTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIView *separatorBar;
@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) NSString *title;

+ (id)reuseId;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
