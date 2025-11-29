@class NSString, HTSLiveImage;

@interface HTSLiveGiftPanelUserExtraInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;

+ (id)descriptor;

@end
