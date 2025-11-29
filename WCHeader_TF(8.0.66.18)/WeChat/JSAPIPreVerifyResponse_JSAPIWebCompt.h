@class NSString, NSMutableArray;

@interface JSAPIPreVerifyResponse_JSAPIWebCompt : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSMutableArray *tags;
@property (nonatomic) unsigned int clientReportId;
@property (nonatomic) unsigned int frontendReportId;
@property (retain, nonatomic) NSString *configJson;

+ (void)initialize;

@end
