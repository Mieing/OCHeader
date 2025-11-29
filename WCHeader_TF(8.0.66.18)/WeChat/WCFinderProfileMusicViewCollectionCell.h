@class WCFinderProfileMusicView, UIView;

@interface WCFinderProfileMusicViewCollectionCell : WCFinderSlideMenuCell

@property (retain, nonatomic) UIView *seperator;
@property (retain, nonatomic) WCFinderProfileMusicView *musicView;
@property (nonatomic) BOOL showSeperator;
@property (nonatomic) BOOL allowSlideDelete;

+ (double)displayHeightWithIndexPath:(id)a0;

- (id)displayContentView;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)curThumbImage;
- (void)onSlideDelete;
- (void)onSlideMenuExpose:(id)a0;
- (void).cxx_destruct;

@end
