@class NSString, HTSLiveImage;

@interface HTSLiveChatGroupExtendData : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long type;

+ (id)descriptor;

@end
