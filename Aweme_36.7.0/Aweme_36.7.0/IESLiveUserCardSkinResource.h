@class IESLiveFlexImage, IESLiveDressResourceWebP, HTSLiveImage;

@interface IESLiveUserCardSkinResource : NSObject

@property (retain, nonatomic) IESLiveDressResourceWebP *webpSource;
@property (retain, nonatomic) HTSLiveImage *imageUrl;
@property (retain, nonatomic) IESLiveFlexImage *flexImageUrl;

- (void).cxx_destruct;

@end
