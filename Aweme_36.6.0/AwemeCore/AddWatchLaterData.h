@class NSString, HTSLiveImage;

@interface AddWatchLaterData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *toast;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (copy, nonatomic) NSString *displayText;

+ (id)descriptor;

@end
