@class NSString;

@interface AWEShowLongVideoModuleService : HTSService <AWEShowLongVideoModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)clickCommentMediumAnchorViewWithModel:(id)a0 params:(id)a1;
+ (void)trackClickCommentMediumAnchorViewWithModel:(id)a0 params:(id)a1;
+ (void)trackShowCommentMediumAnchorViewWithModel:(id)a0 params:(id)a1;
+ (BOOL)enableLongVideoAutoPlayNextEpisode;
+ (long long)getLongVideoAutoPlayNextPreTime;
+ (BOOL)enableBlockLongVideoAutoPlayNextWithPanelShowing;
+ (BOOL)enableInsertLandScapeLVModelToFeedWithLandscapePlayModel:(id)a0 feedPlayModel:(id)a1;
+ (BOOL)playletBottomButtonEnable;
+ (BOOL)playletCollectionBottomButtonEnable;
+ (BOOL)longVideoBottomButtonEnable;
+ (id)commentMediumViewWithModel:(id)a0 params:(id)a1;
+ (BOOL)showCommentMediumViewWithModel:(id)a0;


@end
