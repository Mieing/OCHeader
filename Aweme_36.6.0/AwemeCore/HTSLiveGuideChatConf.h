@class NSString, HTSLiveImage;

@interface HTSLiveGuideChatConf : IESLivePBBaseMessage

@property (nonatomic) long long type;
@property (nonatomic) long long imageId;
@property (copy, nonatomic) NSString *imageIdStr;
@property (copy, nonatomic) NSString *imageText;
@property (retain, nonatomic) HTSLiveImage *emoji;
@property (nonatomic) BOOL hasEmoji;

+ (id)descriptor;

@end
