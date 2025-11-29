@class NSString, RecvChannelTextInfo;

@interface OpenMinimchGuide : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) RecvChannelTextInfo *contentLink;
@property (retain, nonatomic) RecvChannelTextInfo *leftBtn;
@property (retain, nonatomic) RecvChannelTextInfo *rightBtn;
@property (retain, nonatomic) NSString *crossRoute;

+ (void)initialize;

@end
