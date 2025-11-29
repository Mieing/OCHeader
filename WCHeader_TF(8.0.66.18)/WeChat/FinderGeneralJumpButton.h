@class NSString, FinderGeneralJumpToastExtConfig;

@interface FinderGeneralJumpButton : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *content;
@property (nonatomic) unsigned int buttonStyle;
@property (retain, nonatomic) FinderGeneralJumpToastExtConfig *extConfig;
@property (nonatomic) unsigned int jumpType;

+ (void)initialize;

@end
