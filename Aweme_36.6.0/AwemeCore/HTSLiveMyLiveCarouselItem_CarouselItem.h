@class NSString;

@interface HTSLiveMyLiveCarouselItem_CarouselItem : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *scene;

+ (id)descriptor;

@end
