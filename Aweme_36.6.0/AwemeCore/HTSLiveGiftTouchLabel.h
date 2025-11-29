@class NSString, HTSLiveImage;

@interface HTSLiveGiftTouchLabel : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (copy, nonatomic) NSString *uniqueKey;

+ (id)descriptor;

@end
