@class NSString, UIImage;

@interface AWEIMIncentiveProgressPendantConfig : NSObject

@property (copy, nonatomic) NSString *lottieFilePath;
@property (retain, nonatomic) UIImage *centerImage;
@property (retain, nonatomic) UIImage *bonusCenterImage;
@property (retain, nonatomic) UIImage *coolDownCenterImage;
@property (retain, nonatomic) UIImage *nonactivatedCenterImage;
@property (retain, nonatomic) UIImage *hitSuppressionCenterImage;
@property (retain, nonatomic) UIImage *noProgressCenterImage;
@property (nonatomic) BOOL hasBackgroundImage;
@property (nonatomic) struct CGSize { double width; double height; } centerImageSize;
@property (nonatomic) double progressLineWidth;
@property (nonatomic) double progress;
@property (nonatomic) BOOL showProgress;
@property (readonly, copy, nonatomic) NSString *coolDownImageURLString;
@property (copy, nonatomic) id /* block */ didTapBlock;

- (void)updateConfigWithRelationProgress:(id)a0;
- (void).cxx_destruct;

@end
