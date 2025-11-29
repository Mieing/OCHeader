@class NSString, HTSLiveImage;

@interface HTSLiveScreenChatMessageContentExt : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) HTSLiveImage *jumpIcon;
@property (nonatomic) BOOL hasJumpIcon;
@property (nonatomic) int hoverSecond;

+ (id)descriptor;

@end
