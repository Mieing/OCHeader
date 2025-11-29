@class NSString, NSData;

@interface FinderTemplateInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *templateId;
@property (nonatomic) unsigned int templateType;
@property (retain, nonatomic) NSData *extInfo;

+ (void)initialize;

@end
