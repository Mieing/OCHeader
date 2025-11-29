@class NSString;

@interface LiteAppBizData : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *id;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) NSString *bizData;
@property (nonatomic) unsigned int source;
@property (nonatomic) unsigned int priority;

+ (void)initialize;

@end
