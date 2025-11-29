@class NSString, HTSLiveImage;

@interface RivalsRecommendResponse_PopupInfo_PeakCardItem : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (retain, nonatomic) HTSLiveImage *img;
@property (nonatomic) BOOL hasImg;

+ (id)descriptor;

@end
