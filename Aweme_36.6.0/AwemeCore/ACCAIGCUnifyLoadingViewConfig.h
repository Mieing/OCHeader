@class ACCAIGCScrollingTextLabelConfig, NSArray, NSString, UIImage, UIView;

@interface ACCAIGCUnifyLoadingViewConfig : NSObject

@property (retain, nonatomic) UIImage *showImage;
@property (retain, nonatomic) UIImage *unifyLoraCoverImage;
@property (nonatomic) BOOL aigcRetryNeedUnifyLoraCover;
@property (nonatomic) BOOL showDescriptionLabel;
@property (retain, nonatomic) UIImage *avatarImage;
@property (copy, nonatomic) NSArray *avatarImageURLs;
@property (copy, nonatomic) NSString *subTitlePreText;
@property (nonatomic) long long sceneType;
@property (nonatomic) long long subScene;
@property (nonatomic) long long viewType;
@property (nonatomic) double estimateConsumingTime;
@property (nonatomic) BOOL supportRealTimeEstimate;
@property (nonatomic) BOOL shouldUseRealTimeStyle;
@property (nonatomic) BOOL shouldUpdateRealTimeProgress;
@property (retain, nonatomic) NSString *subTitleText;
@property (nonatomic) BOOL forceUseSubTitleText;
@property (copy, nonatomic) NSString *preferredFallbackWaitTimeTip;
@property (nonatomic) BOOL isPlayAigcInIM;
@property (nonatomic) BOOL isSupportAIGCAsync;
@property (nonatomic) BOOL useOptimizedProgress;
@property (nonatomic) double initProgress;
@property (nonatomic) BOOL isTemplateLoading;
@property (nonatomic) struct CGSize { double width; double height; } initialSize;
@property (weak, nonatomic) UIView *mediaContainerView;
@property (nonatomic) BOOL isNoticeBtnAlwaysShow;
@property (nonatomic) BOOL isAlertHidden;
@property (copy, nonatomic) NSString *bottomButtonText;
@property (nonatomic) long long syncPreviousPage;
@property (nonatomic) long long noticeBtnStartShowTime;
@property (nonatomic) BOOL descLabelSupportMultipleLine;
@property (nonatomic) BOOL shouldSkipRetryNetworkCheck;
@property (nonatomic) BOOL enableRetryActionClickTypeAmend;
@property (nonatomic) BOOL hideMoreButton;
@property (retain, nonatomic) ACCAIGCScrollingTextLabelConfig *scrollingSubTitleConfig;
@property (nonatomic) BOOL isForceShowDetainAlert;
@property (nonatomic) BOOL isCancelTaskWithoutNetwork;

+ (BOOL)shouldSupportRealTimeEstimate:(id)a0;
+ (BOOL)shouldUseRealTimeStyle:(id)a0;
+ (BOOL)shouldUpdateRealTimeProgress:(id)a0;
+ (long long)realTimeLoadingWaitTimeSeconds;

- (void).cxx_destruct;

@end
