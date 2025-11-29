@class NSURL, NSString;

@interface AWEMusicCollectionSongCellConfig : NSObject

@property (copy, nonatomic) NSURL *coverURL;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *author;
@property (copy, nonatomic) NSString *durationStr;
@property (copy, nonatomic) NSString *durationAccessibilityLabel;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentPadding;
@property (nonatomic) BOOL showRecommendTag;
@property (nonatomic) BOOL showFullSongTag;
@property (nonatomic) BOOL showPreviewTag;
@property (nonatomic) BOOL showWaveView;
@property (nonatomic) BOOL showCoverMask;
@property (nonatomic) BOOL isWavePlaying;
@property (nonatomic) unsigned long long playIconState;
@property (nonatomic) BOOL showCollectButton;
@property (nonatomic) BOOL isCollected;
@property (nonatomic) BOOL isOffLine;
@property (nonatomic) BOOL showPlaylistUnvailable;
@property (nonatomic) BOOL havePlayRight;
@property (nonatomic) BOOL shouldIgnoreDarkTheme;

- (void).cxx_destruct;

@end
