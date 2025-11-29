@class EcsImg, EcsRichTextButton;

@interface EcsTagItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) EcsRichTextButton *text;
@property (retain, nonatomic) EcsImg *icon;
@property (nonatomic) unsigned int iconSpace;

+ (void)initialize;

@end
