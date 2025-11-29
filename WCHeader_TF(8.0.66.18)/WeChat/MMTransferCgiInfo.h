@class NSString;

@interface MMTransferCgiInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *scope;
@property (nonatomic) unsigned int cgiId;
@property (retain, nonatomic) NSString *cgiUrl;
@property (retain, nonatomic) NSString *cgiPath;
@property (retain, nonatomic) NSString *cgiName;

+ (void)initialize;

@end
