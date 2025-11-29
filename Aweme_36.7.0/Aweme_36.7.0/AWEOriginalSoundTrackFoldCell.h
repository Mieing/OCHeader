@class UILabel, UIImageView;

@interface AWEOriginalSoundTrackFoldCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *foldIcon;
@property (readonly, nonatomic, getter=isFolded) BOOL folded;
@property (nonatomic) long long foldNumber;
@property (copy, nonatomic) id /* block */ foldAction;

+ (double)recommendHeight;

- (void)setFolded:(BOOL)a0;
- (void)updateFoldedState:(BOOL)a0 animated:(BOOL)a1;
- (void)foldButtonClicked:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
