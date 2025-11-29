@class NSString;

@interface WxaSearchInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int h5Version;
@property (nonatomic) unsigned int subType;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *keywordId;
@property (retain, nonatomic) NSString *wordingId;
@property (nonatomic) unsigned int sugPos;

+ (void)initialize;

@end
