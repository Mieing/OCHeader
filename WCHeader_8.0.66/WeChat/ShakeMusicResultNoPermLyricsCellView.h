@class MMUILabel;

@interface ShakeMusicResultNoPermLyricsCellView : UITableViewCell

@property (retain, nonatomic) MMUILabel *lyricsItem;

+ (double)getCellHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setLyrics:(id)a0;
- (void)setSelected:(BOOL)a0;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)mySelected:(BOOL)a0;
- (void).cxx_destruct;

@end
