@class NSString, AWEPlaylistInfoModel, UIColor;

@interface AWEMusicPlaylistTableViewCellViewModel : NSObject <AWEMusicCollectionCellViewModelProtocol, AWEMusicPlaylistTableViewCellViewModelProtocol>

@property (nonatomic) BOOL shouldShowHighlightAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEPlaylistInfoModel *oriModel;
@property (retain, nonatomic) NSString *iconPlaceholderName;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *titleColor;
@property (nonatomic) float coverAlpha;
@property (nonatomic) float titleAlpha;
@property (retain, nonatomic) NSString *countStr;
@property (nonatomic) long long cellHeight;
@property (nonatomic) BOOL showPrivateIcon;
@property (nonatomic) BOOL hasAddButton;
@property (nonatomic) BOOL enableAdd;
@property (nonatomic) BOOL isLoginUserLunaLike;
@property (nonatomic) BOOL isLoginUserListenLater;
@property (nonatomic) BOOL showCoverIcon;
@property (nonatomic) BOOL shouldShowHighlightAnimation;
@property (nonatomic) BOOL showCheckBox;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) NSString *playlistDescriptionInfo;
@property (nonatomic) BOOL showWaveView;
@property (nonatomic) BOOL isWavePlaying;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)trasformFromPlaylistModel:(id)a0 showOwner:(BOOL)a1;
+ (id)trasformFromPlaylistAnchorModel:(id)a0;
+ (id)trasformFromPlaylistModel:(id)a0;
+ (id)_getCountStrByPlaylistModel:(id)a0 showOwner:(BOOL)a1;
+ (BOOL)_getPrvacyByPlaylistModel:(id)a0;

- (double)cellHieght;
- (id)cellForTableView:(id)a0 indexPath:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
