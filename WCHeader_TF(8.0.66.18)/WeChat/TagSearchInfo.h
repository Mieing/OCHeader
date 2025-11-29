@class NSString;

@interface TagSearchInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int tagType;
@property (retain, nonatomic) NSString *tagText;
@property (retain, nonatomic) NSString *tagExtValue;

+ (void)initialize;

@end
