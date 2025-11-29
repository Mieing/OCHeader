@class NSString;

@interface GetSearchShareRequest : WXPBGeneratedMessage

@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *requestId;
@property (retain, nonatomic) NSString *searchId;
@property (nonatomic) unsigned int h5Version;
@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) NSString *content;

+ (void)initialize;

@end
