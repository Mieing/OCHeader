@class NSString;

@interface TranslationInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int x;
@property (nonatomic) unsigned int y;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (retain, nonatomic) NSString *original;
@property (retain, nonatomic) NSString *translation;
@property (nonatomic) unsigned int mergeFlag;
@property (nonatomic) unsigned int groupId;
@property (nonatomic) unsigned int alignType;

+ (void)initialize;

@end
