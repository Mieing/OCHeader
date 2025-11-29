@class NSString;

@interface WeAppSearchAdClickRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *statSessionId;
@property (retain, nonatomic) NSString *keywordId;
@property (retain, nonatomic) NSString *searchId;
@property (retain, nonatomic) NSString *docId;
@property (nonatomic) unsigned int postion;
@property (retain, nonatomic) NSString *appUserName;
@property (retain, nonatomic) NSString *appVersion;
@property (retain, nonatomic) NSString *adBuffer;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *clickExtInfo;

+ (void)initialize;

@end
