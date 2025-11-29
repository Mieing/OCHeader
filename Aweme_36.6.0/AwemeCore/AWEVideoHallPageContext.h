@class NSString, NSMutableDictionary, UICollectionView, UIViewController;

@interface AWEVideoHallPageContext : AWELVideoBasePageContext <AWEVideoHallFeedContextProtocol>

@property (retain, nonatomic) NSMutableDictionary *seekDictionary;
@property (copy, nonatomic) NSString *entityId;
@property (copy, nonatomic) NSString *channelId;
@property (copy, nonatomic) NSString *pageId;
@property (readonly, nonatomic) long long pageType;
@property (nonatomic) BOOL isMute;
@property (nonatomic) BOOL canShowThemeView;
@property (nonatomic) BOOL canShowSearchBar;
@property (nonatomic) long long themeStyle;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (nonatomic) long long firstBlockStyle;
@property (weak, nonatomic) UIViewController *container;
@property (nonatomic) BOOL isOnFeedSharePanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPlaybackTime:(double)a0 key:(id)a1;
- (double)playbackTimeForKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
