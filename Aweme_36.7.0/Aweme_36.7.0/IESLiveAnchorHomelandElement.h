@class NSString, HTSLiveImage;

@interface IESLiveAnchorHomelandElement : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (copy, nonatomic) NSString *mainText;
@property (copy, nonatomic) NSString *mainTextColor;
@property (copy, nonatomic) NSString *subText;
@property (copy, nonatomic) NSString *subTextColor;

+ (id)descriptor;

@end
