@class UILabel, MMWebImageView;

@interface ShakeMusicTableViewCell : MMTableViewCell {
    MMWebImageView *coverImageView;
    UILabel *musicNameLabel;
    UILabel *singerLabel;
}

- (void)updateWithShakeMusicItem:(id)a0;
- (void).cxx_destruct;

@end
