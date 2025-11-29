@class HTSLiveImage;

@interface HTSLiveBottomLabel : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *label;
@property (nonatomic) BOOL hasLabel;

+ (id)descriptor;

@end
