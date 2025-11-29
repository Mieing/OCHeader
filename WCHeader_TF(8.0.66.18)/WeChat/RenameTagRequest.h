@class NSString;

@interface RenameTagRequest : WXPBGeneratedMessage

@property (nonatomic) unsigned int tagId;
@property (retain, nonatomic) NSString *newTagName;

+ (void)initialize;

@end
