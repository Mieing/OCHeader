@interface AWETeenAlbumTracker : NSObject

+ (void)trackAlbumClickWithModel:(id)a0 rank:(long long)a1 enterFrom:(id)a2 isCoverDynamic:(BOOL)a3 isCoverPlayed:(BOOL)a4 labelType:(unsigned long long)a5 extra:(id)a6;
+ (void)trackAlbumShowWithModel:(id)a0 rank:(long long)a1 enterFrom:(id)a2 isCoverDynamic:(BOOL)a3 labelType:(unsigned long long)a4 extra:(id)a5;
+ (void)trackTeenAlbumPlayTimeWithModel:(id)a0 rank:(long long)a1 duration:(long long)a2 enterFrom:(id)a3 isCoverDynamic:(BOOL)a4 labelType:(unsigned long long)a5;
+ (void)trackVideoListShowDuration:(double)a0 isLandscape:(BOOL)a1;
+ (void)trackAlbumLastPageShow:(id)a0 enterMethod:(id)a1 pageType:(long long)a2 isLandScape:(long long)a3;
+ (void)trackCompilationListShow:(BOOL)a0 enterFrom:(id)a1;
+ (void)trackVideoSideListClickWithModel:(id)a0 isLandscape:(BOOL)a1 rankDiff:(long long)a2 duration:(long long)a3;
+ (void)trackSideListShow:(BOOL)a0 enterFrom:(id)a1;
+ (void)trackAlbumLastPageScrollAndIsLandscape:(long long)a0;
+ (void)trackAlbumLastPageClose:(id)a0 isLandScape:(long long)a1;
+ (void)trackAlbumShowWithModel:(id)a0 rank:(long long)a1 enterFrom:(id)a2 enterPosition:(id)a3 isCoverDynamic:(BOOL)a4 labelType:(unsigned long long)a5 extra:(id)a6;
+ (void)trackAlbumShowWithModel:(id)a0 rank:(long long)a1 enterFrom:(id)a2 enterPosition:(id)a3 isCoverDynamic:(BOOL)a4 labelType:(unsigned long long)a5 showType:(id)a6 extra:(id)a7;
+ (void)trackAlbumClickWithModel:(id)a0 rank:(long long)a1 enterFrom:(id)a2 enterPosition:(id)a3 isCoverDynamic:(BOOL)a4 isCoverPlayed:(BOOL)a5 labelType:(unsigned long long)a6 extra:(id)a7;
+ (void)trackTimeBarPageShow;
+ (void)trackLandscapeShowWithModel:(id)a0 enterFrom:(id)a1 enterPosition:(id)a2 isInAlbum:(id)a3;
+ (void)trackLandscapeClickWithModel:(id)a0 enterFrom:(id)a1 enterPosition:(id)a2 isInAlbum:(id)a3 enterMethod:(id)a4 playTime:(id)a5 itemDuration:(id)a6;
+ (void)trackLandscapeQuitWithModel:(id)a0 enterFrom:(id)a1 enterPosition:(id)a2 isInAlbum:(id)a3 quitMethod:(id)a4 playTime:(id)a5 itemDuration:(id)a6;
+ (void)trackAlbumCoverPlayWithModel:(id)a0 rank:(long long)a1 enterFrom:(id)a2 labelType:(unsigned long long)a3 extra:(id)a4;
+ (void)trackAlbumVideoChooseTabClick:(id)a0 albumTitle:(id)a1 activateType:(id)a2 groupID:(id)a3 episode:(long long)a4 tabIndex:(long long)a5;
+ (void)trackAlbumVideoNextClick:(id)a0 enterFrom:(id)a1 albumTitle:(id)a2 groupID:(id)a3 toGroupID:(id)a4 episode:(long long)a5;

@end
