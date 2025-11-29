@class WWShareTypeImage, WWShareTypeLink;

@interface WWShareInvite : WXPBGeneratedMessage

@property (nonatomic) unsigned int shareType;
@property (retain, nonatomic) WWShareTypeImage *contentImage;
@property (retain, nonatomic) WWShareTypeLink *contentLink;

+ (void)initialize;

@end
