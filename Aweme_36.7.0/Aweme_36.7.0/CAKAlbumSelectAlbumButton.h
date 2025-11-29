@class UILabel, UIImageView;

@interface CAKAlbumSelectAlbumButton : CAKAnimatedButton

@property (retain, nonatomic) UILabel *leftLabel;
@property (retain, nonatomic) UIImageView *rightImageView;

- (id)initWithType:(unsigned long long)a0 titleAndImageInterval:(double)a1;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;
- (unsigned long long)accessibilityTraits;

@end
