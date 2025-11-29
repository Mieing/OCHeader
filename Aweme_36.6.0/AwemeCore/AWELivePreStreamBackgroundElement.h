@class NSDictionary, UIImageView, NSArray;

@interface AWELivePreStreamBackgroundElement : AWELiveBusinessBaseElement

@property (nonatomic) BOOL hiddenliveCoverBlur;
@property (nonatomic) BOOL isAvatarBackground;
@property (copy, nonatomic) NSDictionary *blurImageParams;
@property (retain, nonatomic) UIImageView *videoPlaceholderView;
@property (retain, nonatomic) NSArray *placeholderURLList;

- (void)initializeElement;
- (void)prepareForDisPlay;
- (id)blurImageCache;
- (void)p_configPlaceHolderURL;
- (BOOL)shouldUseVsMediaCoverBackground;
- (id)p_vsMediaCoverImageURLArray;
- (id)p_vsCoverImageURLArray;
- (void).cxx_destruct;
- (void)reset;

@end
