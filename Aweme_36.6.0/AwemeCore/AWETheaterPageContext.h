@class NSString, NSMutableDictionary, NSDictionary, UICollectionView, UIViewController;

@interface AWETheaterPageContext : AWEPageContext

@property (retain, nonatomic) NSMutableDictionary *seekDictionary;
@property (copy, nonatomic) NSString *entityId;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *fromPage;
@property (copy, nonatomic) NSDictionary *trackCommonParams;
@property (weak, nonatomic) UIViewController *container;
@property (copy, nonatomic) NSString *channelId;
@property (copy, nonatomic) NSString *previewID;
@property (nonatomic) BOOL isSpringFestivalTask;
@property (nonatomic) BOOL isMute;
@property (nonatomic) BOOL isPopupNoviceGuide;
@property (nonatomic) BOOL isPopupAnchorGuide;
@property (nonatomic) BOOL canShowThemeView;
@property (nonatomic) BOOL showGuidance;
@property (nonatomic) long long themeStyle;
@property (copy, nonatomic) NSString *moreFeedSectionTitle;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (nonatomic) long long firstSectionType;
@property (nonatomic) BOOL isShowingDisLikeVC;

- (void)setPlaybackTime:(double)a0 key:(id)a1;
- (double)playbackTimeForKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
