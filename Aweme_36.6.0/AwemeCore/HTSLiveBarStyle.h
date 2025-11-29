@class NSString, HTSLiveImage;

@interface HTSLiveBarStyle : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *leftIcon;
@property (nonatomic) BOOL hasLeftIcon;
@property (retain, nonatomic) HTSLiveImage *rightIcon;
@property (nonatomic) BOOL hasRightIcon;
@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *textColor;
@property (nonatomic) BOOL hasFrame;
@property (copy, nonatomic) NSString *frameBegin;
@property (copy, nonatomic) NSString *frameEnd;

+ (id)descriptor;

@end
