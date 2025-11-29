@class NSString;
@protocol MMStoreEmotionDesignerPackBrowseViewControllerDelegate;

@interface MMStoreEmoticonDesignerPackBrowseViewController : MMStoreEmoticonDesignerPackBaseViewController

@property (weak, nonatomic) id<MMStoreEmotionDesignerPackBrowseViewControllerDelegate> delegate;
@property (nonatomic) BOOL needStaticsInfo;
@property (retain, nonatomic) NSString *sdkRequestID;
@property (nonatomic) unsigned long long emoticonEnterScene;

- (BOOL)shouldUseRichStyle;
- (BOOL)shouldFetchStaticsInfo;
- (BOOL)shouldRemoveExpiredPack;
- (BOOL)shouldShowDownloadView;
- (BOOL)needSDKReport;
- (unsigned long long)DetailVCEntryScene;
- (unsigned long long)DetailVCEntryExtrance;
- (unsigned long long)currentDesignerEmoticonPackTapEventType;
- (void)OnRewardStoreItem:(id)a0;
- (void)onTapEmoticonWithItem:(id)a0;
- (void)OnOpenDetailViewForItem:(id)a0;
- (void)OnOpenEmojiHalfScreen:(id)a0;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
