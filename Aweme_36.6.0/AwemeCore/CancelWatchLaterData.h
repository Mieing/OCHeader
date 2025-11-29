@class NSString, HTSLiveImage;

@interface CancelWatchLaterData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *buttonText;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (copy, nonatomic) NSString *displayText;

+ (id)descriptor;

@end
