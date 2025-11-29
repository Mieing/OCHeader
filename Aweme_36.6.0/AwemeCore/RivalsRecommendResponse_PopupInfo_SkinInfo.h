@class NSString, HTSLiveImage;

@interface RivalsRecommendResponse_PopupInfo_SkinInfo : IESLivePBBaseMessage

@property (nonatomic) BOOL isUnlocked;
@property (copy, nonatomic) NSString *skinName;
@property (copy, nonatomic) NSString *rankDetail;
@property (copy, nonatomic) NSString *scoreDetail;
@property (retain, nonatomic) HTSLiveImage *img;
@property (nonatomic) BOOL hasImg;
@property (copy, nonatomic) NSString *buttonContent;

+ (id)descriptor;

@end
