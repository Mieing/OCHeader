@class EmoticonPreviewModel, MMUIActivityIndicatorView, UIImageView, MMEmoticonView, UIView, UILabel, NSString;

@interface EmoticonPreviewBaseWindowViewController : MMWindowViewController <IStoreEmotionSingleDownloadMgrExt>

@property (retain, nonatomic) EmoticonPreviewModel *model;
@property (retain, nonatomic) UIImageView *popoverView;
@property (retain, nonatomic) MMEmoticonView *playerView;
@property (retain, nonatomic) UIView *playerViewContainer;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView;
@property (nonatomic) unsigned long long startLoadingTime;
@property (nonatomic) BOOL isLoadLocally;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (BOOL)checkIfEmojiDownloaded;
- (void)setPreviewModel:(id)a0;
- (void)playEmotionGifIfNeed;
- (void)onSingleEmotionDownloadOkWithWrap:(id)a0 imageData:(id)a1;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)a0;
- (void).cxx_destruct;

@end
