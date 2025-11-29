@class NSArray, NSDictionary, IESECGoodsDetailCommonMeta, NSString, UIImage;
@protocol IESECImagePreviewTransitionContextProvider, IESECMediaPreviewDelegate, IESECGoodsDetailContainerProtocol;

@interface IESECMediaPreviewConfig : NSObject

@property (nonatomic) BOOL showDetailEntrance;
@property (retain, nonatomic) NSArray *previewItems;
@property (retain, nonatomic) NSArray *videoListItems;
@property (retain, nonatomic) NSArray *previewTabItems;
@property (retain, nonatomic) NSDictionary *gallery;
@property (retain, nonatomic) IESECGoodsDetailCommonMeta *commonMeta;
@property (nonatomic) BOOL isNormalSize;
@property (nonatomic) BOOL shouldAddStatusBarGaussBlur;
@property (nonatomic) BOOL forceShowTab;
@property (copy, nonatomic) NSString *sourceBtmToken;
@property (nonatomic) long long index;
@property (nonatomic) long long normalIndex;
@property (weak, nonatomic) id<IESECGoodsDetailContainerProtocol> container;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSArray *titles;
@property (nonatomic) unsigned long long titleType;
@property (nonatomic) BOOL showIndex;
@property (nonatomic) BOOL showTitle;
@property (nonatomic) BOOL showShareButton;
@property (nonatomic) BOOL isHidenCloseButton;
@property (nonatomic) BOOL showDownloadButton;
@property (nonatomic) BOOL enableLongPress;
@property (retain, nonatomic) UIImage *downloadBtnImage;
@property (nonatomic) BOOL showBigMuteButton;
@property (retain, nonatomic) UIImage *noMuteImage;
@property (retain, nonatomic) UIImage *muteImage;
@property (copy, nonatomic) id /* block */ clickDownloadBlock;
@property (copy, nonatomic) id /* block */ longPressBlock;
@property (copy, nonatomic) id /* block */ playFinishWithError;
@property (copy, nonatomic) id /* block */ playFinishWithStatusException;
@property (copy, nonatomic) id /* block */ trackEvent;
@property (weak, nonatomic) id<IESECMediaPreviewDelegate> delegate;
@property (weak, nonatomic) id<IESECImagePreviewTransitionContextProvider> transitionContextProvider;
@property (nonatomic) unsigned long long enterFrom;
@property (nonatomic) BOOL enableVideoCollection;
@property (nonatomic) BOOL enableAIVideo;
@property (nonatomic) double headerAsyncOffset;
@property (copy, nonatomic) NSString *playerTag;
@property (copy, nonatomic) NSString *playerSubTag;

- (void).cxx_destruct;
- (id)init;

@end
