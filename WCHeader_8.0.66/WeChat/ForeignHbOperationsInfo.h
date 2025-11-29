@class NSString;

@interface ForeignHbOperationsInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *name;
@property (nonatomic) int type;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) unsigned int enable;
@property (retain, nonatomic) NSString *iconUrl;
@property (nonatomic) unsigned int ossKey;
@property (nonatomic) unsigned int focus;

+ (void)initialize;

@end
