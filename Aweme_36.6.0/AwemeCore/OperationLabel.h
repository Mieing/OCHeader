@class NSString, HTSLiveImage;

@interface OperationLabel : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *backgroundImageColor;

+ (id)descriptor;

@end
