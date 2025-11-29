@class NSString, HTSLiveImage, RivalsRecommendResponse_GameBanner_Button;

@interface RivalsRecommendResponse_GameBanner : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (retain, nonatomic) RivalsRecommendResponse_GameBanner_Button *button;
@property (nonatomic) BOOL hasButton;
@property (copy, nonatomic) NSString *eventTrackingInfo;

+ (id)descriptor;

@end
