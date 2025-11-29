@class NSData, NSString;

@interface ConfCloudRequest : WXPBGeneratedMessage

@property (nonatomic) unsigned int taskid;
@property (retain, nonatomic) NSData *body;
@property (nonatomic) unsigned int cmdid;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) BOOL longpolling;

+ (void)initialize;

@end
