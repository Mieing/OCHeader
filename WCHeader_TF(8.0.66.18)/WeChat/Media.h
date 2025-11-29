@class NSString;

@interface Media : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *thumbUrl;

+ (void)initialize;

@end
