@class NSString, RedPacketStoryInfo;

@interface RedPacketPreviewMessage : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSString *aboutUrl;
@property (retain, nonatomic) NSString *authorId;
@property (retain, nonatomic) RedPacketStoryInfo *info;

+ (void)initialize;

@end
