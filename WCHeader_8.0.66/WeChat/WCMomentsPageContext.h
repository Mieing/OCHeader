@class UIViewController;

@interface WCMomentsPageContext : NSObject

@property (weak, nonatomic) UIViewController *rootViewController;
@property (readonly, nonatomic) BOOL scrollViewMonitorEnabled;
@property (readonly, nonatomic) long long microMerchantFoldStyle;
@property (nonatomic) long long bizMpImageDisplayStyle;
@property (readonly, nonatomic) BOOL ImagePreview_showsImageSearching;
@property (nonatomic) long long sourceDisplayStyle;
@property (readonly, nonatomic) BOOL canPlayLivePhotos;
@property (readonly, nonatomic) BOOL canAutoPlayLivePhotos;
@property (readonly, nonatomic) BOOL canSaveLivePhotos;
@property (readonly, nonatomic) BOOL livePhotoShowMutedMenu;
@property (readonly, nonatomic) BOOL showsLivePhotoIconInThumbView;
@property (readonly, nonatomic) BOOL supportCommentImagePost;
@property (readonly, nonatomic) BOOL supportCommentImageBrowse;
@property (readonly, nonatomic) BOOL supportCommentEmoticonPost;
@property (readonly, nonatomic) BOOL supportCommentEmoticonBrowse;
@property (readonly, nonatomic) BOOL supportCommentEmoticonOrImagePost;
@property (readonly, nonatomic) BOOL supportCommentEmoticonOrImageBrowse;
@property (readonly, nonatomic) BOOL supportAdCommentEmoticonImgPost;

- (id)initWithRootViewController:(id)a0;
- (void)updateDynamicConfigs;
- (BOOL)updateCommnetEmoticonAndImageConfigs;
- (void)updateSpecifiedDynamicConfigsWhenTimelineWillAppear;
- (id)description;
- (void).cxx_destruct;

@end
