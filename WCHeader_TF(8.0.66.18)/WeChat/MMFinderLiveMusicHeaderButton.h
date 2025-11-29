@class MMLRUCache, FinderLiveBriefMusicInfo, UIImageView, UIView;
@protocol MMFinderLiveMusicHeaderButtonDelegate;

@interface MMFinderLiveMusicHeaderButton : UIView

@property (retain, nonatomic) MMLRUCache *qqMusicCache;
@property (retain, nonatomic) MMLRUCache *tingMusicCache;
@property (retain, nonatomic) FinderLiveBriefMusicInfo *currentBriefInfo;
@property (retain, nonatomic) UIView *musicButton;
@property (retain, nonatomic) UIImageView *musicIconView;
@property (weak, nonatomic) id<MMFinderLiveMusicHeaderButtonDelegate> delegate;

- (id)initWithCacheCapacity:(unsigned int)a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutMusicIcon;
- (BOOL)updateCurrentId:(id)a0;
- (void)updateMusicLogo;
- (void)setCacheSongItemForId:(id)a0 item:(id)a1;
- (id)objectCacheSongItemForId:(id)a0;
- (void)onClick;
- (void)setupMusicView;
- (void).cxx_destruct;

@end
