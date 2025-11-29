@class UIView, NSString, NSArray, VoipRecentStatusImagesView, EditVideoBGMPlayer, WCFinderDataItem, UIImageView, NSMutableArray, RecommendedMusicInfo;

@interface VoipRecentStatusFinderImagesView : UIView <VoipRecentStatusProperties, VoipRecentStatusFinderBackgroundProtocol>

@property (retain, nonatomic) WCFinderDataItem *wcFinderDataItem;
@property (retain, nonatomic) RecommendedMusicInfo *musicInfo;
@property (retain, nonatomic) NSArray *mediaInfos;
@property (retain, nonatomic) EditVideoBGMPlayer *bgmPlayer;
@property (retain, nonatomic) VoipRecentStatusImagesView *imagesView;
@property (retain, nonatomic) NSMutableArray *dotViews;
@property (retain, nonatomic) UIView *soundView;
@property (retain, nonatomic) UIImageView *soundIconImageView;
@property (copy, nonatomic) id /* block */ didClickSoundButtonCallback;
@property (copy, nonatomic) id /* block */ didSlideImagesCallback;
@property (nonatomic) BOOL isSoundBtnHidden;
@property (nonatomic) BOOL shouldPlaySound;
@property (nonatomic) BOOL isVisable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWCFinderDataItem:(id)a0;
- (void)layoutSubviews;
- (void)onSilenceViewClickWithSender:(id)a0;
- (void)onTerminate;
- (void).cxx_destruct;

@end
