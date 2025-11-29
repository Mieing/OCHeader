@class HTSLiveMyLiveCarouselItem;

@interface IESLiveProfileUpperArea : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveMyLiveCarouselItem *carousel;
@property (nonatomic) BOOL hasCarousel;

+ (id)descriptor;

@end
