@class NSString, UIImage, UIView, IESLiveCombineTwoTuple;

@interface IESLiveOpenPlatformShareScreenModel : NSObject

@property (copy, nonatomic) NSString *castScreenIdentifier;
@property (retain, nonatomic) UIImage *castScreenIcon;
@property (retain, nonatomic) UIImage *castBackgroundImage;
@property (copy, nonatomic) NSString *castBackgroundImageURL;
@property (copy, nonatomic) NSString *castBusinessIconURL;
@property (nonatomic) BOOL enableGuidePanel;
@property (nonatomic) BOOL closeAlertShouldShow;
@property (nonatomic) BOOL shouldHideSmallWindowView;
@property (nonatomic) BOOL shouldHideEndButton;
@property (nonatomic) BOOL shouldHideBackgroundToast;
@property (nonatomic) struct CGSize { double width; double height; } screenCastSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } streamVideoInputRatio;
@property (retain, nonatomic) UIView *castScreenComponentView;
@property (copy, nonatomic) NSString *castScreenMinimizeToast;
@property (copy, nonatomic) NSString *castScreenSuccessToast;
@property (nonatomic) struct CGPoint { double x; double y; } customInitializePosition;
@property (retain, nonatomic) IESLiveCombineTwoTuple *anchorCameraPreviewRatioTuple;
@property (nonatomic) long long castScreenStrategy;
@property (retain, nonatomic) UIView *interactCameraPreview;
@property (nonatomic) BOOL shouldUseCustomCastScreen;

- (void).cxx_destruct;

@end
