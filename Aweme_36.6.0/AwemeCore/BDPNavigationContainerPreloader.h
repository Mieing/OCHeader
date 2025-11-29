@class UIImage, NSString;

@interface BDPNavigationContainerPreloader : NSObject <BDPAPPFramePreloadProtocol>

@property (retain, nonatomic) UIImage *moreImage;
@property (retain, nonatomic) UIImage *moreGreyImage;
@property (retain, nonatomic) UIImage *closeImage;
@property (retain, nonatomic) UIImage *feedbackImage;
@property (retain, nonatomic) UIImage *moreImageV2;
@property (retain, nonatomic) UIImage *moreGreyImageV2;
@property (retain, nonatomic) UIImage *closeImageV2_1;
@property (retain, nonatomic) UIImage *closeImageV2_2;
@property (retain, nonatomic) UIImage *closeImageV2_3;
@property (retain, nonatomic) UIImage *feedbackImageV2;
@property (retain, nonatomic) UIImage *lightNormalBGImageV2;
@property (retain, nonatomic) UIImage *darkNormalBGImageV2;
@property (retain, nonatomic) UIImage *lightHighlightImageV2;
@property (retain, nonatomic) UIImage *darkHighlightImageV2;
@property (retain, nonatomic) UIImage *loadingErrorImage;
@property (copy, nonatomic) NSString *closeButtonAccessibilityLabelString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)startPreload;
+ (void)bootstrapLaunch;
+ (void)initialize;
+ (id)sharedManager;

@end
