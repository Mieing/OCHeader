@class UILabel, NSString;

@interface AWEOriginalSoundTrackMusicListHeader : UITableViewHeaderFooterView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;

+ (double)recommandedHeight;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;

@end
