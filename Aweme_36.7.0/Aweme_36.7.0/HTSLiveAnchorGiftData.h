@class HTSLiveImage;

@interface HTSLiveAnchorGiftData : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *anchorDiyOriginImg;
@property (nonatomic) BOOL hasAnchorDiyOriginImg;

+ (id)descriptor;

@end
