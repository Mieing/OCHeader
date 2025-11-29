@class UIImageView, UIColor;

@interface ACFAudioStateView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) UIColor *imageBackgroundColor;
@property (retain, nonatomic) UIColor *imageColor;
@property (retain, nonatomic) UIColor *loadingImageColor;
@property (nonatomic) double extraHotAreaLength;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;

- (void)removeLoadingAnimation;
- (void)updateStartPlayImageView;
- (void)updateDefaultStateImageView;
- (void)updateAudioState:(unsigned long long)a0;
- (void)updateLoadingImageView;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)setupUI;
- (void)startLoadingAnimation;

@end
