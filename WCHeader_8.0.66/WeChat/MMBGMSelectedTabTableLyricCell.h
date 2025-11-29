@class NSString, UIImageView, WCProgressCircleView, MMBGMCoverImageView, MMBGMSelectedMarqueeTextView, UIView;

@interface MMBGMSelectedTabTableLyricCell : MMBGMSelectedTabTableBaseCell <WCVideoProducerViewModelExt>

@property (nonatomic) BOOL isLoading;
@property (retain, nonatomic) MMBGMCoverImageView *coverImageView;
@property (retain, nonatomic) MMBGMSelectedMarqueeTextView *songSingerMarqueeView;
@property (retain, nonatomic) MMBGMSelectedMarqueeTextView *lyricsMarqueeView;
@property (retain, nonatomic) UIImageView *checkImageView;
@property (retain, nonatomic) WCProgressCircleView *progressLoadingView;
@property (retain, nonatomic) UIView *separator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellID;
+ (id)lyricsWithMusicInfo:(id)a0;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setIsCellSelected:(BOOL)a0;
- (void)updateWithMusicData:(id)a0 config:(id)a1 globalConfig:(id)a2 sourceTabType:(unsigned long long)a3;
- (id)musicId;
- (id)musicIdForMusicData:(id)a0;
- (void)initView;
- (void)initCoverImageView;
- (void)initSongSingerMarqueeView;
- (void)initLyricsMarqueeView;
- (void)initCheckImageView;
- (void)initProgressLoadingView;
- (void)initSeparator;
- (void)layoutSubviews;
- (id)songSingerDisplayAttributedStringWithQuery:(id)a0;
- (id)lyricsDisplayAttributedString;
- (void)videoProducerViewModel:(id)a0 changeMusicInfoWillStart:(id)a1;
- (void)videoProducerViewModel:(id)a0 changeMusicInfo:(id)a1 progress:(double)a2;
- (void)videoProducerViewModel:(id)a0 changeMusicInfo:(id)a1 completeSuccess:(BOOL)a2;
- (void)updateAccessibility;
- (unsigned long long)accessibilityTraits;
- (id)genAccessibilityLabel;
- (void).cxx_destruct;

@end
