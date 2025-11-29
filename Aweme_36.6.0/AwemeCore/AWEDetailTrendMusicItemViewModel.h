@class UIColor, NSString, NSArray, AWETrendDetailMusicItemModel, UIImage;

@interface AWEDetailTrendMusicItemViewModel : NSObject

@property (retain, nonatomic) AWETrendDetailMusicItemModel *musicItemModel;
@property (nonatomic, getter=isLoading) BOOL loading;
@property (nonatomic) long long playStatus;
@property (nonatomic) double playBackTime;
@property (readonly, copy, nonatomic) NSString *musicTitle;
@property (readonly, nonatomic) long long musicItemTitleStyle;
@property (readonly, copy, nonatomic) NSString *musicAuthor;
@property (readonly, nonatomic) NSArray *coverURLs;
@property (readonly, nonatomic) NSString *coverURI;
@property (readonly, nonatomic) NSString *LunaUGButtonText;
@property (readonly, nonatomic) NSString *lunaAppendPlaylistText;
@property (nonatomic, getter=isCollected) BOOL collect;
@property (nonatomic) long long lunaPlaylistCollectStatus;
@property (retain, nonatomic) UIImage *currentCoverImage;
@property (retain, nonatomic) UIColor *bgColor;
@property (nonatomic, getter=isTrackedShow) BOOL trackedShow;

- (long long)diversionMediaType;
- (id)diversionInfo;
- (id)diversionInfo;
- (id)initWithMusicItemModel:(id)a0;
- (id)musicItemTrackParams;
- (BOOL)hasMatchedLunaSong;
- (BOOL)canShowAppendPlaylistWhenLunaInstalled;
- (BOOL)isLunaSongAbove;
- (BOOL)matchedLunaSongisSame;
- (long long)headerViewRevisionType;
- (BOOL)canShowMatchedLunaSongInHeader;
- (BOOL)isLunaMV;
- (id)songIdForLunaUg;
- (BOOL)isLunaUGBtnEnable;
- (BOOL)isLunaAddPlaylistEnable;
- (BOOL)isCoverLunaIconShowed;
- (BOOL)isLunaInfoShowInHeader;
- (id)lunaPopUpCoverURL;
- (BOOL)shouldShowMusicCollectButton;
- (void)updateWithMusicItemModel:(id)a0;
- (void)updateMusicPlayServiceStatus:(long long)a0;
- (void)updatePlayBackTime:(double)a0;
- (void).cxx_destruct;

@end
