@class NSString;

@interface BindTagRequest : WXPBGeneratedMessage

@property (nonatomic) unsigned int favId;
@property (nonatomic) unsigned int tagId;
@property (retain, nonatomic) NSString *tagName;
@property (nonatomic) unsigned int opCode;

+ (void)initialize;

@end
