@class NSString, NSArray, UIImage, UIView, IESECHeadVideoModel;

@interface IESECMediaPreviewHelper : NSObject <IESECMediaPreviewDelegate, IESECImagePreviewTransitionContextProvider, IESECMediaPreviewProtocol>

@property (retain, nonatomic) IESECHeadVideoModel *videoModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *mediaPreviewInfoArray;
@property (retain, nonatomic) NSArray *videoInfoArray;
@property (copy, nonatomic) NSArray *imageURlsList;
@property (copy, nonatomic) NSArray *titles;
@property (nonatomic) long long index;
@property (nonatomic) long long titleType;
@property (weak, nonatomic) UIView *thumbnailView;
@property (copy, nonatomic) id /* block */ didSwipe;
@property (copy, nonatomic) id /* block */ willDismiss;
@property (copy, nonatomic) id /* block */ didDismiss;
@property (nonatomic) BOOL showDownloadButton;
@property (retain, nonatomic) UIImage *downloadBtnImage;
@property (nonatomic) BOOL isFromECOMIM;
@property (nonatomic) BOOL enableLongPress;
@property (nonatomic) BOOL showBigMuteButton;
@property (retain, nonatomic) UIImage *noMuteImage;
@property (retain, nonatomic) UIImage *muteImage;
@property (copy, nonatomic) id /* block */ clickDownloadBlock;
@property (copy, nonatomic) id /* block */ longPressBlock;
@property (copy, nonatomic) id /* block */ playFinishWithError;
@property (copy, nonatomic) id /* block */ playFinishWithStatusException;
@property (copy, nonatomic) id /* block */ trackEvent;

- (void)mediaPreviewController:(id)a0 didDismissWithIndex:(long long)a1 isCurrentVideoTab:(BOOL)a2;
- (void)mediaPreviewController:(id)a0 willDismissWithIndex:(long long)a1 isCurrentVideoTab:(BOOL)a2;
- (void)mediaPreviewController:(id)a0 didSwipeToIndex:(long long)a1 previousIndex:(long long)a2;
- (id)targetViewForImagePreviewController:(id)a0 atIndex:(long long)a1;
- (void)configShowTitle:(id)a0;
- (id)createVideoViewWithVideoModel:(id)a0 coverImageURL:(id)a1 needCookie:(BOOL)a2;
- (void).cxx_destruct;
- (id)show;

@end
