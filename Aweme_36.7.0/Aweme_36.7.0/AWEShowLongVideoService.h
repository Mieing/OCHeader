@class NSString;

@interface AWEShowLongVideoService : HTSService <AWEShowLongVideoService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)longVideoPlusUtil;
+ (id)showSelectPanelWithModel:(id)a0 delegate:(id)a1;
+ (BOOL)getIsShowingLongVideoSelectPanel;
+ (void)setIsShowingLongVideoSelectPanel:(BOOL)a0;
+ (Class)longVideoPlusAwemeDetailCell;
+ (id)getLongVideoPlusDetailCellWithIdentifier:(id)a0;
+ (Class)feedGeneralLongVideoCell;
+ (id)getLongVideoFeedCellWithIdentifier:(id)a0;
+ (Class)longVideoPlusCell;
+ (Class)longVideoPlusInteractionFactory;
+ (id)getLongVideoLandscapeHighLightEntranceView;

- (id)longVideoAlbumFavoriteButtonWithButtonStyleType:(long long)a0;
- (id)aweShowLongVideoSelectEpisodePanelWithDataController:(id)a0 delegate:(id)a1;
- (id)aweShowLongVideoSelectEpisodePanelWithDataController:(id)a0 delegate:(id)a1 trackerParams:(id)a2;
- (id)longVideoPlusDataController;
- (BOOL)aweLongVideoSelectPanelShowing;
- (id)createLongVideoWaterMarkView;

@end
