@class NSString, BDImage;

@interface AWEIMMessageAnimationBubblePresenterProps : AWEIMUIViewPresenterProps

@property (retain, nonatomic) NSString *bubbleID;
@property (nonatomic) BOOL isSelfMsg;
@property (retain, nonatomic) BDImage *animationTLImage;
@property (retain, nonatomic) BDImage *animationTMImage;
@property (retain, nonatomic) BDImage *animationTRImage;
@property (retain, nonatomic) BDImage *animationMLImage;
@property (retain, nonatomic) BDImage *animationMRImage;
@property (retain, nonatomic) BDImage *animationBLImage;
@property (retain, nonatomic) BDImage *animationBMImage;
@property (retain, nonatomic) BDImage *animationBRImage;

- (void).cxx_destruct;

@end
