@class NSString, HTSLiveImage;

@interface GiftAgentConfig : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (copy, nonatomic) NSString *schema;

+ (id)descriptor;

@end
