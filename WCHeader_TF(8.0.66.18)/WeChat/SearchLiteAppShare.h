@class NSString;

@interface SearchLiteAppShare : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *page;
@property (retain, nonatomic) NSString *query;
@property (nonatomic) unsigned int sourceType;
@property (retain, nonatomic) NSString *minVersion;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *thumbUrl;
@property (retain, nonatomic) NSString *srcId;
@property (retain, nonatomic) NSString *nsLink;

+ (void)initialize;

@end
