@class UIImage, NSString, AWEIMMessage;

@interface AWEIMImageContentProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) id /* block */ ensureBeginDownloadAction;
@property (copy, nonatomic) id /* block */ coverDidTappedAction;
@property (copy, nonatomic) id /* block */ coplayTapAction;
@property (copy, nonatomic) id /* block */ didSetImageBlock;
@property (retain, nonatomic) UIImage *displayImage;
@property (copy, nonatomic) NSString *animateRunloopMode;
@property (nonatomic) BOOL showEnsureDownloadView;
@property (nonatomic) long long loadingViewState;
@property (retain, nonatomic) NSString *fileSizeText;
@property (nonatomic) double downloadProgress;
@property (nonatomic) BOOL showProgressIndicator;
@property (nonatomic) long long imageContentMode;
@property (retain, nonatomic) AWEIMMessage *message;
@property (nonatomic) double foldedRadius;
@property (nonatomic) BOOL needFold;
@property (nonatomic) BOOL isLivePhoto;
@property (nonatomic) BOOL isInMessageBody;
@property (nonatomic) BOOL coplayViewHidden;
@property (nonatomic) BOOL enableJoinCoplayAction;
@property (nonatomic) unsigned long long coplayPosition;
@property (nonatomic) double quotedRadius;
@property (nonatomic) double bottomShieldHeight;

- (void).cxx_destruct;

@end
