@class NSString, WCFinderFeedImageCDNView, MMLiveCDNPlayerView, WCFinderDataItem;

@interface MMLiveSpecialCollectionViewCell : UICollectionViewCell <MMLiveCDNPlayerViewDelegate>

@property (retain, nonatomic) NSString *videoUri;
@property (retain, nonatomic) WCFinderFeedImageCDNView *coverView;
@property (retain, nonatomic) MMLiveCDNPlayerView *playerView;
@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (nonatomic) BOOL play;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ReuseIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)onPlayBegin;
- (void)onPlayEnd;
- (void)onPlayChangeSize:(struct CGSize { double x0; double x1; })a0;
- (void)initViews;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0;
- (void)onEnterForeground;
- (void).cxx_destruct;

@end
