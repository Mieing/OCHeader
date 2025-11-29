@protocol WCFinderMusicHeaderViewDelegate;

@interface WCFinderMusicBaseHeaderView : UICollectionReusableView

@property (weak, nonatomic) id<WCFinderMusicHeaderViewDelegate> delegate;

+ (double)heightWithMusicTopicInfo:(id)a0 andViewWidth:(double)a1;
+ (id)getSongDescByMusicTopicInfo:(id)a0;
+ (BOOL)hasMusicCopyright:(id)a0;
+ (BOOL)enablePlayMusicInfo:(id)a0;
+ (BOOL)enableUseSourceContactByMusicTopicInfo:(id)a0 contact:(id)a1;

- (void)updateWithMusicTopicInfo:(id)a0 fromDataItem:(id)a1 shareItemInfo:(id)a2;
- (id)getHeaderTitle;
- (id)getHeaderIconUrl;
- (void).cxx_destruct;

@end
