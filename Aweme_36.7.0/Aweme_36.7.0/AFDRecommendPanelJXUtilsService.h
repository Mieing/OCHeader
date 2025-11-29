@class NSString;

@interface AFDRecommendPanelJXUtilsService : HTSService <AFDRecommendPanelJXUtilsService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canShowJXSubtitleTextWithModel:(id)a0 userModel:(id)a1;
+ (BOOL)canShowPCSubtitleTextWithModel:(id)a0 userID:(id)a1;
+ (id)attributedPCTextForNewPanel;
+ (id)attributedTextForNewPanel;
+ (id)attributedTextForPanelSubTitle:(id)a0;
+ (void)didClickPanelSubTitle:(id)a0;
+ (id)attributedTextForPanelUserItemSubTitle:(id)a0 currentUser:(id)a1;
+ (void)didClickUserItemSubTitle:(id)a0;
+ (void)didClickUserItemSubTitlePC:(id)a0;
+ (void)trackPCRecommendLabelWithModel:(id)a0 Event:(id)a1 text:(id)a2;
+ (void)trackClickSelectedContentTag:(id)a0;
+ (id)userItemSubTitleText;
+ (void)tryLaunchJXApp:(id)a0;
+ (void)trackJXSourceLabelClicked:(id)a0;
+ (void)trackJXDownloadPopupButtonClick:(BOOL)a0 awemeModel:(id)a1;
+ (void)trackJXDownloadPopupShow:(id)a0;
+ (id)jxEventTrackCommonPrams:(id)a0;


@end
