@class NSString, BaseRequest;

@interface FinderFileDumpRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *posterUsername;
@property (retain, nonatomic) NSString *clientId;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *fromApp;
@property (retain, nonatomic) NSString *paramJson;
@property (retain, nonatomic) BaseRequest *baseRequest;

+ (void)initialize;

@end
